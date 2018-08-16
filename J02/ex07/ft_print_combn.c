/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:02:47 by acantin           #+#    #+#             */
/*   Updated: 2018/08/08 16:53:41 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb > 9 || nb < 0)
		ft_putchar(nb > 0 ? nb / 10 : nb / -10);
	if (nb < 0)
		ft_putchar('-');
	ft_putchar(nb < 0 ? 48 + ((nb % -10) * -1) : 48 + (nb % 10));
}

void	ft_print_combn(int n)
{
	int max;
	int i;

	max = 10;
	i = 1;
	while (i < n)
	{
		max *= 10;
		i++;
	}
	i = 1;
	while (i < max)
		i++;
}
