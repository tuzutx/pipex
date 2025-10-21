/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:33:24 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 19:04:07 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main(void)
{
    char buffer[10] = "Hola";

    printf("Antes: %s\n", buffer);
    bzero(buffer, 10);
    printf("Después: %s\n", buffer);
	return 0;
}*/
