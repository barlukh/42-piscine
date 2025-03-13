/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:58:27 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/10 13:13:52 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char digit);
void	ft_putnbr(int nb);
int		ft_is_space(char c);
int		ft_atoi(char *str);
int		plus(int a, int b);
int		minus(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);

void	operator(char **argv, int a, int b, int (*f[])(int, int))
{
	if (argv[2][0] == '+')
		ft_putnbr(f[0](a, b));
	else if (argv[2][0] == '-')
		ft_putnbr(f[1](a, b));
	else if (argv[2][0] == '*')
		ft_putnbr(f[2](a, b));
	else if (argv[2][0] == '/')
	{
		if (b == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
		ft_putnbr(f[3](a, b));
	}
	else
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
		ft_putnbr(f[4](a, b));
	}
}

int	main(int argc, char **argv)
{
	int	(*f_pointers[5])(int, int);
	int	a;
	int	b;

	if (argc != 4)
		return (0);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		ft_putnbr(0);
		return (0);
	}
	f_pointers[0] = plus;
	f_pointers[1] = minus;
	f_pointers[2] = multiply;
	f_pointers[3] = divide;
	f_pointers[4] = modulo;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operator(argv, a, b, f_pointers);
	return (0);
}
