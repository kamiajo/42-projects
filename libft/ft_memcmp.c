/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:48:03 by hwatercr          #+#    #+#             */
/*   Updated: 2021/10/11 14:12:46 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t len)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *) arr1;
	a2 = (unsigned char *) arr2;
	while (len-- > 0)
	{
		if (*a1++ != *a2++)
			return (*--a1 - *--a2);
	}
	return (0);
}
