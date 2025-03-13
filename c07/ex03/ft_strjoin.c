/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:45:08 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/02 12:28:03 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	p(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
		j = 0;
	}
	return (len);
}

int	q(char *sep)
{
	int	len;

	len = 0;
	while (sep[len] != '\0')
		len++;
	return (len);
}

void	separator(char *str, char *sep, int *k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		str[*k] = sep[i];
		i++;
		*k = *k + 1;
	}
}

char	*zero(void)
{
	char	*str;

	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return (zero());
	str = malloc((p(size, strs) + 1 + ((q(sep) * (size - 1)))) * sizeof(char));
	if (str == (void *)0)
		return ((void *)0);
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		if (i < size - 1)
			separator(str, sep, &k);
		i++;
		j = 0;
	}
	str[k] = '\0';
	return (str);
}
