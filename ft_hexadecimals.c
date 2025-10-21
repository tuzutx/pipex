/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:13:09 by nolaeche          #+#    #+#             */
/*   Updated: 2025/05/13 12:37:26 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "ft_printf.h"

static void	ft_recursive_hex(unsigned int x, char *hexadecimal, size_t *i)
{
	const char	*hex = "0123456789abcdef";

	if (x >= 16)
		ft_recursive_hex(x / 16, hexadecimal, i);
	hexadecimal[(*i)++] = hex[x % 16];
}

static char	*ft_hexadecimal(unsigned int x)
{
	char		*hexadecimal;
	size_t		i;

	hexadecimal = malloc(9);
	if (!hexadecimal)
		return (NULL);
	i = 0;
	if (x == 0)
		hexadecimal[i++] = '0';
	else
		ft_recursive_hex(x, hexadecimal, &i);
	hexadecimal[i] = '\0';
	return (hexadecimal);
}

int	ft_if_x(va_list args)
{
	unsigned int	x;
	char			*s;
	int				i;

	x = va_arg(args, unsigned int);
	s = ft_hexadecimal(x);
	i = ft_putstr(s);
	free(s);
	return (i);
}

int	ft_if_xmayus(va_list args)
{
	unsigned int	x;
	char			*s;
	size_t			i;

	i = 0;
	x = va_arg(args, unsigned int);
	s = ft_hexadecimal(x);
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	i = ft_putstr(s);
	free(s);
	return (i);
}
