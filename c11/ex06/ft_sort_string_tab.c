/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:29:19 by bgazur            #+#    #+#             */
/*   Updated: 2025/03/12 09:53:19 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_p_tab(int strcount, char **tab, int (*f)(char*, char*))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = strcount - 1;
	while (j > 0)
	{
		while (i < j)
		{
			if (f(tab[i], tab[i + 1]) == 1)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		j--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
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

void	ft_sort_string_tab(char **tab)
{
	int	strcount;

	strcount = 0;
	while (tab[strcount] != (void *)0)
		strcount++;
	ft_sort_p_tab(strcount, tab, &ft_strcmp);
}
