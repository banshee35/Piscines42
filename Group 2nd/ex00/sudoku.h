/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acantin <acantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:56:38 by acantin           #+#    #+#             */
/*   Updated: 2018/08/11 22:13:11 by fstadelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define ORDER 0
# define REVERSE 1

# define ERR 0
# define OK 1

int		parse_command_line(char sudoku[9][9], int argc, char **argv);
int		solve_sudoku_rec(char sudoku[9][9], int order, int pos);
int		is_sudoku_unique(char sudoku[9][9], char check[9][9]);
void	print_sudoku(char sudoku[9][9]);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		error(void);

#endif
