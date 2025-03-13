/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 09:54:19 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/28 12:02:41 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return ((void *)0);
	size = max - min;
	arr = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		arr[i] = (min + i);
		i++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (!*range)
		return (-1);
	return (max - min);
}
