/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:17:08 by acantin           #+#    #+#             */
/*   Updated: 2018/08/07 02:14:19 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int variable;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	variable = nb;
	while (variable > 1)
	{
		variable--;
		nb = nb * variable;
	}
	return (nb);
}
