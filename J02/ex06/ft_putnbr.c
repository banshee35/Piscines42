/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:21:53 by acantin           #+#    #+#             */
/*   Updated: 2018/08/13 18:28:45 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int higher_10th;
	int buff;
	int pos_neg;

	pos_neg = 1;
	higher_10th = 1;
	if (nb < 0)
	{
		pos_neg = -1;
		ft_putchar('-');
	}
	buff = nb;
	while (buff /= 10)
		higher_10th *= 10;
	while (higher_10th)
	{
		ft_putchar(nb / higher_10th % 10 * pos_neg + '0');
		higher_10th /= 10;
	}
}
