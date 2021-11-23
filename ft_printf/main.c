/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwatercr <hwatercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:07:13 by hwatercr          #+#    #+#             */
/*   Updated: 2021/11/09 17:50:46 by hwatercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		nb;
	char	*p;

	p = "ololo";
	nb = ft_printf("%c", 'l');
	printf("%d\n", nb);
	nb = ft_printf("%s", "kamiajo");
	printf("%d\n", nb);
	nb = ft_printf("%d", 24586);
	printf("%d\n", nb);
	nb = ft_printf("%i", 4518678);
	printf("%d\n", nb);
	nb = ft_printf("%x", 312);
	printf("%d\n", nb);
	nb = ft_printf("%X", 312);
	printf("%d\n", nb);
	nb = ft_printf("%p", p);
	printf("%d\n", nb);
	nb = ft_printf("%%");
	printf("%d\n", nb);
	return (0);
}
