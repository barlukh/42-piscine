/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:56:25 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/25 08:36:18 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == n)
			return (0);
		c1 = s1[i];
		c2 = s2[i];
		if (c1 > c2)
			return (1);
		else if (c1 < c2)
			return (-1);
		else
			i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}

int	find_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	strlen;
	int	findlen;
	int	i;

	strlen = find_length(str);
	findlen = find_length(to_find);
	if (findlen == 0)
		return (str);
	i = 0;
	while (i < (strlen - findlen + 1))
	{
		if (ft_strncmp(str + i, to_find, findlen) == 0)
			return (str + i);
		i++;
	}
	return ((void *)0);
}
