/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:42:13 by acantin           #+#    #+#             */
/*   Updated: 2018/08/14 17:15:20 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_sort(char **tabchar, int nb)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	while (i < (nb - 1))
	{
		j = 0;
		while (tabchar[i][j] == tabchar[i + 1][j])
			j++;
		if (tabchar[i][j] > tabchar[i + 1][j])
		{
			buff = tabchar[i];
			tabchar[i] = tabchar[i + 1];
			tabchar[i + 1] = buff;
			i = 0;
		}
		i++;
	}
}

void	ft_print(char **tabchar, int nb)
{
	int i;
	int j;

	if (nb > 1)
	{
		i = 1;
		while (i < nb)
		{
			j = 0;
			while (tabchar[i][j] != '\0')
			{
				ft_putchar(tabchar[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_sort(argv, argc);
	ft_print(argv, argc);
	return (0);
}
