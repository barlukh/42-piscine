/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:42:49 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/24 08:49:50 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

int	is_lowercase(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

int	is_uppercase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

int	is_alphanumeric(char c)
{
	if (is_number(c) || is_lowercase(c) || is_uppercase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (!(is_alphanumeric(str[i - 1])))
				str[i] = str[i] - 32;
		}
		else if (is_uppercase(str[i]))
			if (i != 0)
				if (is_alphanumeric(str[i - 1]))
					str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
