/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:48:24 by nolaeche          #+#    #+#             */
/*   Updated: 2025/09/05 20:11:49 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "libft/libft.h"
#include "ft_printf.h"

static int	ft_letter(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_if_c(args);
	else if (c == 's')
		i = ft_if_s(args);
	else if (c == 'p')
		i = ft_if_p(args);
	else if (c == 'u')
		i = ft_if_u(args);
	else if (c == 'i' || c == 'd')
		i = ft_if_id(args);
	else if (c == 'x')
		i = ft_if_x(args);
	else if (c == 'X')
		i = ft_if_xmayus(args);
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_letter(str[++i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
