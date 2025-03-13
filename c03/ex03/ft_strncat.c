/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:42:28 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/25 08:40:19 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destpos;
	unsigned int	srcpos;

	destpos = 0;
	while (dest[destpos] != '\0')
		destpos++;
	srcpos = 0;
	while (src[srcpos] != '\0' && srcpos < nb)
	{
		dest[destpos] = src[srcpos];
		destpos++;
		srcpos++;
	}
	dest[destpos] = '\0';
	return (dest);
}
