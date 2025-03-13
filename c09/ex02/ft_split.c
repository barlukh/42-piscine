/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:25:06 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/06 12:26:12 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separator(char ch, char *charset)
{
	while (*charset)
	{
		if (ch == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && separator(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (*str && !separator(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*allocate_word(char *str, char *charset)
{
	int		len;
	char	*start;
	char	*word;

	len = 0;
	start = str;
	while (*str && !separator(*str, charset))
	{
		len++;
		str++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (start < str)
	{
		*word = *start;
		word++;
		start++;
	}
	*word = '\0';
	return (word - len);
}

char	**split(char *str, char *charset, char **result)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && separator(*str, charset))
			str++;
		if (*str)
		{
			result[i] = allocate_word(str, charset);
			i++;
			while (*str && !separator(*str, charset))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**result;

	if (!str || !charset)
		return (NULL);
	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	result = split(str, charset, result);
	return (result);
}
