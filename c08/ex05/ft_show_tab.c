/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:49:45 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/04 20:58:12 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_write(char digit)
{
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	long long int	divisor;
	long long int	num;

	num = (long long int) nb;
	if (num == 0)
	{
		ft_write('0');
		return ;
	}
	divisor = 1;
	while (num / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		ft_write('0' + (num / divisor) % 10);
		divisor /= 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
