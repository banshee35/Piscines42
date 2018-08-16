/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:50:07 by acantin           #+#    #+#             */
/*   Updated: 2018/08/12 19:26:45 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int pos_neg;
	int result;

	i = 0;
	result = 0;
	pos_neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		pos_neg = str[i] == '+' ? 1 : -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
		result = result * 10 + (str[i++] - 48);
	return (result * pos_neg);
}
