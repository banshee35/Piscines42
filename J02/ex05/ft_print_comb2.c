/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 09:31:23 by acantin           #+#    #+#             */
/*   Updated: 2018/08/10 13:13:24 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_filter(int a, int b)
{
	char	droite[2];
	char	gauche[2];

	gauche[0] = (a / 10) + 48;
	gauche[1] = (a % 10) + 48;
	droite[0] = (b / 10) + 48;
	droite[1] = (b % 10) + 48;
	if (a != b || b > a)
	{
		ft_putchar(gauche[0]);
		ft_putchar(gauche[1]);
		ft_putchar(' ');
		ft_putchar(droite[0]);
		ft_putchar(droite[1]);
		if (a != 98 || b != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void		ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_filter(i, j);
			++j;
		}
		++i;
	}
}
