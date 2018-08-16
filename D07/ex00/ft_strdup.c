/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:16:56 by acantin           #+#    #+#             */
/*   Updated: 2018/08/15 16:22:47 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		lengh_src;
	int		i;

	i = 0;
	lengh_src = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (lengh_src + 1));
	while (i < lengh_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
