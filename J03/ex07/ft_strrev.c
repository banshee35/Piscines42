/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:46:57 by acantin           #+#    #+#             */
/*   Updated: 2018/08/13 18:36:55 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i > j)
		{
			c = str[i];
			str[i] = str[j];
			str[j] = c;
			j++;
			i--;
		}
	return (str);
}
