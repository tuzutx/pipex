/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:43:30 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 17:53:16 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	b;
	size_t	len_src;
	size_t	len_dest;

	b = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size <= len_dest)
		return (len_src + size);
	i = len_dest;
	while (b < size - i - 1 && src[b] != '\0')
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] = '\0';
	return (len_dest + len_src);
}
/*
int main() 
{
    char *dest = "Hola, ";
    char *src = "mundo!";
    
    unsigned int resultado = ft_strlcat(dest, src, 4);

    printf("Cadena resultante: %s\n", dest);
    printf("Longitud total deseada: %d\n", resultado);

    return 0;
}*/
