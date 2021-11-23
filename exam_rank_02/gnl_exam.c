/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_exam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:39:07 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/23 03:39:08 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	get_next_line(char **line)
{
	int rd = 0;
	int i = 0;
	char ch;
	char *buffer = malloc(100000);
	*line = buffer;
	while ((rd = read(0, &ch, 1)) > 0 && ch != '\n')
		buffer[i++] = ch;
	buffer[i] = '\0';
	return (rd);
}
