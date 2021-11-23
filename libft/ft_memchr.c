/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:34:47 by hwatercr          #+#    #+#             */
/*   Updated: 2021/10/08 20:41:12 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n--)
	{
		if (*p != (unsigned char)ch)
			p++;
		else
			return (p);
	}
	return (0);
}
