/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 08:41:33 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/28 09:38:28 by bgazur           ###   ########.fr       */
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
