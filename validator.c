/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhadiats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:19:03 by rhadiats          #+#    #+#             */
/*   Updated: 2017/01/14 15:45:54 by rhadiats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validate_document(const char *arg)
{
	int 	fd;
	int 	bts;
	char	buf[BUF_SIZE];

	fd = open(arg, O_RDONLY);
		if (fd == -1)
			error_message_no_newline("error #2");
	bts = read(fd, buf, BUF_SIZE);
		if (bts == -1)
			error_message_no_newline("error #3");
	if (check_last_newline(buf) == 1)
		error_message_no_newline("error newlines\n");
	return (0);
}

int		validator(const char *arg)
{
	int		fd;
	int		bts;
	char	buf[BUF_SIZE];

	bts = 1;
	fd = open(arg, O_RDONLY);
	if (fd == -1)
		error_message_no_newline("Problem with file opening\n");
	while (bts != 0)
	{
		bts = read(fd, buf, 21);
		if (check_lines(buf) == 1)
			error_message_no_newline("error lines\n");
		if (check_symb(buf) == 1)
			error_message_no_newline("error symb\n");
		if (check_rows(buf) == 1)
			error_message_no_newline("error rows\n");
		if (check_tetriminos(buf) == 1)
			error_message_no_newline("error connections\n");
	}
	validate_document(arg);
	close(fd);
	return (0);
}
