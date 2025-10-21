/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:07:22 by nolaeche          #+#    #+#             */
/*   Updated: 2025/09/05 20:12:07 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_if_c(va_list args)
{
	char	c;
	int		i;

	i = 0;
	c = (char)va_arg(args, int);
	i = ft_putchar(c);
	return (i);
}

int	ft_if_s(va_list args)
{
	char	*s;
	int		i;

	s = va_arg(args, char *);
	i = ft_putstr(s);
	return (i);
}

int	ft_if_id(va_list args)
{
	int		i;
	char	*str;
	int		a;

	i = va_arg(args, int);
	str = ft_itoa(i);
	a = ft_putstr(str);
	free(str);
	return (a);
}
