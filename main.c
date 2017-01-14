/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhadiats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:45:38 by rhadiats          #+#    #+#             */
/*   Updated: 2017/01/13 22:31:37 by rhadiats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		error_message_no_newline("usage: ./fillit [reading_file]\n");
	if (validator(argv[1]) == 1)
		return (1);
	printf("SUCESS!\n");
	return (0);
}
