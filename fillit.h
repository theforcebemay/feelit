/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhadiats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 18:27:37 by rhadiats          #+#    #+#             */
/*   Updated: 2017/01/14 15:43:46 by rhadiats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define INCREMENT4ELEMS(a, b, c, d) a++, b++, c++, d++
# define INCREMENT2ELEMS(a, b) a++, b++
# define BUF_SIZE 4096
# define MAX_READ 21
# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

int			check_lines(const char *str);
int			check_symb(const char *str);
int			check_rows(const char *str);
int			check_tetriminos(const char *str);
int			check_last_newline(const char *str);
int			error_message_no_newline(const char *str);
int			validator(const char *str);

#endif
