/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:20:42 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 17:52:52 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/*
int main() {
    const char *frase = "Hola mundo!";
    size_t longitud = ft_strlen(frase);

    printf("La frase es: \"%s\"\n", frase);
    printf("Longitud: %zu caracteres\n", longitud);

    return 0;
}*/
