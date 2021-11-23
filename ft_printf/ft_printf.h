/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:09:02 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:51:44 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_format
{
	va_list	arg;
	int		count;
}				t_format;

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
size_t	numlen(int n);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_char(t_format *args);
void	ft_string(t_format *args);
void	ft_hex(t_format *p, char c);
void	ft_pointer(t_format *p);
void	ft_integer(t_format *args);
void	ft_unsignedint(t_format *args);

#endif
