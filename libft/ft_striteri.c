/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:03:21 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 11:05:22 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if ((!s) || (!f))
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = toupper(*c);
	else
		*c = tolower(*c);
}

void add_index_to_char(unsigned int i, char *c)
{
	*c = *c + i;
}

int main(void)
{
	char str1[] = "hola";
	char str2[] = "abcdef";
	char str3[] = "Hello World!";
	char str4[] = ""; // string vacío

	printf("Original: \"%s\"\n", str1);
	ft_striteri(str1, to_upper_if_even);
	printf("Resultado \"%s\"\n\n", str1);

	printf("Original: \"%s\"\n", str2);
	ft_striteri(str2, add_index_to_char);
	printf("Resultado: \"%s\"\n\n", str2);

	printf("Original: \"%s\"\n", str3);
	ft_striteri(str3, add_index_to_char);
	printf("Resultado: \"%s\"\n\n", str3);

	printf("Original: \"%s\"\n", str4);
	ft_striteri(str4, to_upper_if_even);
	printf("Resultado: \"%s\"\n\n", str4);

	return (0);
}*/
