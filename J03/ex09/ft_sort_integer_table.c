/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:45:25 by acantin           #+#    #+#             */
/*   Updated: 2018/08/08 17:04:26 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int buff;

	i = -1;
	buff = 0;
	while (++i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			buff = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = buff;
			i = 0;
		}
	}
}
