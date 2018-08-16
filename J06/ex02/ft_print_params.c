/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:25:12 by acantin           #+#    #+#             */
/*   Updated: 2018/08/14 17:23:55 by acantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	ft_print(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		ft_putchar(s1[i]);
		i++;
	}
	return (*s1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc >= 1 && i < argc)
	{
		ft_print(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (**argv);
}
