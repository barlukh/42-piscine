/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:55:44 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/24 17:38:26 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	destpos;
	int	srcpos;

	destpos = 0;
	while (dest[destpos] != '\0')
		destpos++;
	srcpos = 0;
	while (src[srcpos] != '\0')
	{
		dest[destpos] = src[srcpos];
		destpos++;
		srcpos++;
	}
	dest[destpos] = '\0';
	return (dest);
}
