/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:23:31 by acantin           #+#    #+#             */
/*   Updated: 2018/08/15 18:38:19 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int sum;
	int ret;

	if (min >= max)
		return (NULL);
	while (i < max)
	{
		sum = max - min;
		ret = (int*)malloc(sizeof(*ret) * sum);
		i = 0;
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	return (ret);
}
