/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:46:08 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/25 12:03:04 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if ((!s) || (!f))
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (toupper(c));
	else
		return (c);
}

char add_index_to_char(unsigned int i, char c)
{
	return (c + i);
}

int main(void)
{
	char *result;
	
	printf("🔹 Caso 1: Mayúsculas en índices pares\n");
	result = ft_strmapi("hola mundo", to_upper_if_even);
	printf("Original: \"hola mundo\"\nResultado: \"%s\"\n\n", result);
	free(result);

	printf("🔹 Caso 2: Sumar índice al carácter\n");
	result = ft_strmapi("abcd", add_index_to_char);
	printf("Original: \"abcd\"\nResultado: \"%s\"\n\n", result);
	free(result);

	printf("🔹 Caso 3: String vacío\n");
	result = ft_strmapi("", to_upper_if_even);
	printf("Original: \"\"\nResultado: \"%s\"\n\n", 
		result ? result : "(NULL)");
	free(result);

	return (0);
}*/
