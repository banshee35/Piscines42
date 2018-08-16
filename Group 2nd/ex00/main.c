/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <acantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:26:32 by acantin           #+#    #+#             */
/*   Updated: 2018/08/11 22:17:27 by fstadelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int			main(int argc, char **argv)
{
	char	sudoku[9][9];
	char	check[9][9];

	if (parse_command_line(sudoku, argc, argv) == ERR ||
		parse_command_line(check, argc, argv) == ERR)
		return (error());
	if (solve_sudoku_rec(sudoku, ORDER, 0) == ERR ||
		solve_sudoku_rec(check, REVERSE, 0) == ERR)
		return (error());
	if (is_sudoku_unique(sudoku, check) == ERR)
		return (error());
	print_sudoku(sudoku);
	return (0);
}
