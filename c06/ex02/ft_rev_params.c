/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:05:23 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/28 11:47:19 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = argc - 1;
	while (i < argc)
	{
		while (argv[k][j] != '\0')
		{
			write(1, &argv[k][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
		k--;
	}
	return (0);
}
