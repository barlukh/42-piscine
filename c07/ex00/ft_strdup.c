/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 08:26:55 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/28 09:34:50 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*p;

	if (src == (void *)0)
		return ((void *)0);
	i = 0;
	while (src[i] != '\0')
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (p == (void *)0)
		return ((void *)0);
	j = 0;
	while (src[j] != '\0')
	{
		p[j] = src[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
