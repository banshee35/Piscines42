/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:31:36 by acantin           #+#    #+#             */
/*   Updated: 2018/08/15 18:38:00 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *ret;
	int i;

	i = 0;
	ret = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	*range = ret;
	return (i);
}
