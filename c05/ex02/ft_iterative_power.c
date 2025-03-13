/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:03:15 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/26 11:59:51 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
