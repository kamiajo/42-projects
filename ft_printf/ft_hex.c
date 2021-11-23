/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:09:26 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:02:55 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_addresslength(unsigned long nb, int *i)
{
	char	*ptr;

	while (nb >= 16)
	{
		nb /= 16;
		*i += 1;
	}
	ptr = (char *)malloc((*i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[*i] = '\0';
	return (ptr);
}

void	ft_hex(t_format *p, char c)
{
	unsigned int	n;
	int				i;
	char			*str;

	n = va_arg(p->arg, unsigned long);
	i = 1;
	str = ft_addresslength(n, &i);
	i--;
	while (i >= 0)
	{
		if (n % 16 < 10)
			str[i] = '0' + (n % 16);
		else if (c == 'x')
			str[i] = 'a' - 10 + (n % 16);
		else
			str[i] = 'A' - 10 + (n % 16);
		n /= 16;
		i--;
		p->count++;
	}
	ft_putstr(str);
	free(str);
}

void	ft_pointer(t_format *p)
{
	unsigned long	n;
	int				i;
	char			*str;

	n = va_arg(p->arg, unsigned long);
	i = 1;
	str = ft_addresslength(n, &i);
	ft_putstr("0x");
	p->count += 2;
	i--;
	while (i >= 0)
	{
		if (n % 16 < 10)
			str[i] = '0' + (n % 16);
		else
			str[i] = 'a' - 10 + (n % 16);
		n /= 16;
		i--;
		p->count++;
	}
	ft_putstr(str);
	free(str);
}
