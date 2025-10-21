/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:57:57 by nolaeche          #+#    #+#             */
/*   Updated: 2025/09/05 20:12:23 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

static void	ft_recursive_void(unsigned long x, char *hexadecimal, size_t *i)
{
	const char	*hex = "0123456789abcdef";

	if (x >= 16)
		ft_recursive_void(x / 16, hexadecimal, i);
	hexadecimal[(*i)++] = hex[x % 16];
}

static char	*ft_void(void *ptr)
{
	size_t			i;
	unsigned long	id;
	char			*hexadecimal;

	if (!ptr)
		return (ft_strdup("(nil)"));
	hexadecimal = malloc(19);
	if (!hexadecimal)
		return (NULL);
	id = (unsigned long)ptr;
	hexadecimal[0] = '0';
	hexadecimal[1] = 'x';
	i = 2;
	if (id == 0)
		hexadecimal[i++] = '0';
	else
		ft_recursive_void(id, hexadecimal, &i);
	hexadecimal[i] = '\0';
	return (hexadecimal);
}

int	ft_if_p(va_list args)
{
	void	*p;
	char	*str;
	int		i;

	p = va_arg(args, void *);
	str = ft_void(p);
	i = ft_putstr(str);
	free(str);
	return (i);
}
