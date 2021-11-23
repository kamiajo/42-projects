/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:17:40 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:18:36 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char c, t_format *args)
{
	if (c == 'c')
		ft_char(args);
	else if (c == 's')
		ft_string(args);
	else if (c == 'd' || c == 'i')
		ft_integer(args);
	else if (c == 'u')
		ft_unsignedint(args);
	else if (c == 'x' || c == 'X')
		ft_hex(args, c);
	else if (c == 'p')
		ft_pointer(args);
	else if (c == '%')
	{
		ft_putchar(c);
		args->count++;
	}
}

static t_format	*init_args(void)
{
	t_format	*args;

	args = (t_format *)malloc(sizeof(t_format));
	if (!args)
		return (NULL);
	args->count = 0;
	return (args);
}

int	ft_printf(const char *str, ...)
{
	t_format	*args;
	int			count;
	int			i;

	i = 0;
	count = 0;
	args = init_args();
	va_start(args->arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			args->count++;
		}
		else if (str[i] == '%')
			ft_format(str[++i], args);
		i++;
	}
	count = args->count;
	va_end(args->arg);
	free(args);
	return (count);
}
