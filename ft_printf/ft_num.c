/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:08:11 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 18:46:02 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(unsigned int nb)
{
	int	count;

	count = 1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static char	*unsint_to_str(unsigned int nb)
{
	char	*ret;
	int		len;

	len = num_len(nb);
	ret = (char *)malloc(len + 1 * sizeof(char));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	while (len > 0)
	{
		ret[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (ret);
}

void	ft_integer(t_format *args)
{
	char	*str;

	str = ft_itoa(va_arg(args->arg, int));
	ft_putstr(str);
	args->count += ft_strlen(str);
	free(str);
}

void	ft_unsignedint(t_format *args)
{
	char	*str;

	str = unsint_to_str(va_arg(args->arg, unsigned int));
	ft_putstr(str);
	args->count += ft_strlen(str);
	free(str);
}
