/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 17:57:58 by acantin           #+#    #+#             */
/*   Updated: 2018/08/15 18:37:25 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (*s1);
}

int		total_strlen(int argc, char **argv)
{
	int count;
	int i;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count = count + ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*r;
	int		total;
	int		i;
	int		j;
	int		k;

	total = total_strlen(argc, argv) + argc;
	r = (char*)malloc(sizeof(*r) * total);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			r[k] = argv[i][j];
			k++;
			j++;
		}
		r[k] = '\n';
		k++;
		i++;
	}
	r[k - 1] = '\0';
	return (r);
}
