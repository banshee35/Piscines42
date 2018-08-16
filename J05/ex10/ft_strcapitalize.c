/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:49:30 by acantin           #+#    #+#             */
/*   Updated: 2018/08/16 15:10:18 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char i)
{
	if (i >= 65 && i <= 90)
		i += 32;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		str[k] = ft_strlowcase(str[k]);
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] -= 32;
		if ((str[k - 1] < 'a' || str[k - 1] > 'z') && \
				(str[k - 1] < 'A' || str[k - 1] > 'Z') && \
				(str[k - 1] < '0' || str[k - 1] > '9') && \
				(str[k] <= 'z' && str[k] >= 'a'))
			str[k] -= 32;
		k++;
	}
	return (str);
}
