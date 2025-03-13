/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:42:40 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/10 13:19:49 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		write(1, "\n", 1);
		return ;
	}
	if (num < 0)
	{
		ft_write('-');
		num = -num;
	}
	divisor = 1;
	while (num / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		ft_write('0' + (num / divisor) % 10);
		divisor /= 10;
	}
	write(1, "\n", 1);
}
