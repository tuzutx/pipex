/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:23:35 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/23 11:59:00 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(ft_strlen(str) + 1);
	if (!copy)
		return (NULL);
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = str[i];
	return (copy);
}
/*
int main() {
	const char *original = "Hola, Mundo!";
	char *copia;

	copia = ft_strdup(original);  // Copia la cadena

	if (copia != NULL) {
		printf("Cadena original: %s\n", original);
		printf("Cadena copiada: %s\n", copia);
		free(copia);  // No olvides liberar la memoria
	} else {
		printf("Error al duplicar la cadena.\n");
	}

	return 0;
}*/
