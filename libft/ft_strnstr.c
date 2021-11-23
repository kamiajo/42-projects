/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:43:46 by hwatercr          #+#    #+#             */
/*   Updated: 2021/10/15 17:38:50 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	unsigned int	n;
	size_t			len2;

	if (*str2 == '\0')
		return ((char *)str1);
	n = 0;
	len2 = ft_strlen(str2);
	while (*str1 != '\0')
	{
		if (n + len2 > len)
			return (NULL);
		if (ft_strncmp(str1, str2, len2) == 0)
			return ((char *)str1);
		str1++;
		n++;
	}
	return (NULL);
}
