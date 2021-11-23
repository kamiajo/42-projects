/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:49:25 by hwatercr          #+#    #+#             */
/*   Updated: 2021/10/12 21:55:17 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*save;
	char	c;

	c = ch;
	save = NULL;
	while (*str)
	{
		if (*str == c)
			save = (char *)str;
		if (*str == '\0')
			return (save);
		str++;
	}
	if (*str == c)
		save = (char *)str;
	return (save);
}
