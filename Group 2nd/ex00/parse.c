/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <acantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 18:08:13 by acantin           #+#    #+#             */
/*   Updated: 2018/08/11 20:58:42 by fstadelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

int		is_sudoku_char(char c)
{
	return ((c >= '1' && c <= '9') || c == '.');
}

int		verify_param(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 10)
		return (ERR);
	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!is_sudoku_char(argv[i][j]))
				return (ERR);
			j++;
		}
		if (j != 9)
			return (ERR);
		i++;
	}
	if (i != 10)
		return (ERR);
	return (OK);
}

int		parse_command_line(char sudoku[9][9], int argc, char **argv)
{
	int	i;
	int	j;

	if (verify_param(argc, argv) == ERR)
		return (ERR);
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			sudoku[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
	return (OK);
}
