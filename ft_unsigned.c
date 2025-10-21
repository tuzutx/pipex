/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:01:25 by nolaeche          #+#    #+#             */
/*   Updated: 2025/05/13 13:02:04 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "ft_printf.h"

static int	ft_unblen(long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (counter = 1);
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static char	*ft_uitoa(unsigned int n)
{
	char			*str;
	unsigned int	len;
	long			nlong;

	nlong = n;
	len = (ft_unblen(nlong) + 1);
	str = malloc(len);
	if (!str)
		return (NULL);
	len--;
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nlong > 0)
	{
		str[--len] = ((nlong % 10) + 48);
		nlong /= 10;
	}
	return (str);
}

int	ft_if_u(va_list args)
{
	unsigned int	u;
	char			*str;
	int				count;

	u = va_arg(args, unsigned int);
	str = ft_uitoa(u);
	count = ft_putstr(str);
	free(str);
	return (count);
}
