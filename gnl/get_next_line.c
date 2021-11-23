/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:12:07 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:46:20 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_remainder(char **str)
{
	char	*temp;
	char	*line;
	size_t	count;

	count = 0;
	line = NULL;
	while ((*str)[count] != '\n' && (*str)[count])
		count++;
	if ((*str)[count] == '\n')
	{
		line = ft_substr(*str, 0, count + 1);
		temp = ft_strdup(*str + count + 1);
		free(*str);
		*str = temp;
		if (!**str)
		{
			free(*str);
			*str = NULL;
		}
		return (line);
	}
	line = ft_strdup(*str);
	free(*str);
	*str = NULL;
	return (line);
}

static char	*check(char **s, int n)
{
	if (n < 0)
		return (NULL);
	if (!n && (!s || !*s))
		return (NULL);
	return (get_remainder(s));
}

char	*get_next_line(int fd)
{
	char		*temp;
	char		*buf;
	static char	*line;
	int			was_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	was_read = read(fd, buf, BUFFER_SIZE);
	while (was_read > 0)
	{
		buf[was_read] = '\0';
		if (!line)
			line = ft_strdup("");
		temp = ft_strjoin(line, buf);
		free(line);
		line = temp;
		if (ft_strchr(buf, '\n'))
			break ;
		was_read = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (check(&line, was_read));
}
