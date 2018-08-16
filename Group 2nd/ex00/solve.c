/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <acantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 18:12:15 by acantin           #+#    #+#             */
/*   Updated: 2018/08/11 22:36:27 by fstadelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			is_alone_in_line(char sudoku[9][9], int pos)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (i != pos % 9)
		{
			if (sudoku[pos / 9][pos % 9] == sudoku[pos / 9][i])
				return (ERR);
		}
		i++;
	}
	return (OK);
}

int			is_alone_in_column(char sudoku[9][9], int pos)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (i != pos / 9)
		{
			if (sudoku[pos / 9][pos % 9] == sudoku[i][pos % 9])
				return (ERR);
		}
		i++;
	}
	return (OK);
}

int			is_alone_in_block(char sudoku[9][9], int pos)
{
	int		i;
	int		j;
	int		x;
	int		y;

	x = pos / 9;
	y = pos % 9;
	i = x / 3 * 3;
	while (i < x / 3 * 3 + 3)
	{
		j = y / 3 * 3;
		while (j < y / 3 * 3 + 3)
		{
			if (i != x && j != y)
			{
				if (sudoku[x][y] == sudoku[i][j])
					return (ERR);
			}
			j++;
		}
		i++;
	}
	return (OK);
}

int			is_alone(char sudoku[9][9], int pos)
{
	return (is_alone_in_line(sudoku, pos) == OK &&
			is_alone_in_column(sudoku, pos) == OK &&
			is_alone_in_block(sudoku, pos) == OK);
}

/*
** The function stacks up until it cannot place a number.
** If none are found it returns ERR
** If the end is found it returns OK and bypass everything,
** so that the function don't try to find the next number
*/

int			solve_sudoku_rec(char sudoku[9][9], int order, int pos)
{
	char	i;
	int		j;

	if (pos >= 82)
		return (OK);
	if (sudoku[pos / 9][pos % 9] != '.')
		return (solve_sudoku_rec(sudoku, order, pos + 1));
	j = 1;
	i = (order == ORDER) ? '1' : '9';
	while (j <= 9)
	{
		sudoku[pos / 9][pos % 9] = i;
		if (is_alone(sudoku, pos))
		{
			if (solve_sudoku_rec(sudoku, order, pos + 1) == OK)
				return (OK);
		}
		i += (order == ORDER) ? 1 : -1;
		j++;
	}
	sudoku[pos / 9][pos % 9] = '.';
	return (ERR);
}
