/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:15:14 by acantin           #+#    #+#             */
/*   Updated: 2018/08/14 16:41:08 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	int max;
	int pos_neg;
	int buff;

	max = 1;
	pos_neg = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		pos_neg = -1;
	}
	buff = nbr;
	while (buff /= 10)
		max *= 10;
	while (max)
	{
		ft_putchar(nbr / max % 10 * pos_neg + '0');
		max /= 10;
	}
}
