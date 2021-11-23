/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:09:15 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:02:46 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(t_format *args)
{
	ft_putchar(va_arg(args->arg, int));
	args->count++;
}

void	ft_string(t_format *args)
{
	int		len;
	char	*str;

	str = va_arg(args->arg, char *);
	if (!str)
	{
		ft_putstr("(null)");
		args->count += 6;
	}
	else
	{
		len = ft_strlen(str);
		ft_putstr(str);
		args->count += len;
	}
}
