/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 08:57:13 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/12 15:04:22 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length <= 1)
		return (1);
	while (i < length - 1)
	{
		if ((f(tab[i], tab[i + 1]) < 0))
		{
			while (++i < length - 1)
				if ((f(tab[i], tab[i + 1]) > 0))
					return (0);
		}
		else if ((f(tab[i], tab[i + 1]) > 0))
		{
			while (++i < length - 1)
				if ((f(tab[i], tab[i + 1]) < 0))
					return (0);
		}
		i++;
	}
	return (1);
}
