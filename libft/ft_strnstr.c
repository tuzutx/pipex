/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:41:43 by nolaeche          #+#    #+#             */
/*   Updated: 2025/10/06 19:14:26 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	b;
	char	*big;
	char	*little;

	i = 0;
	b = 0;
	big = (char *)str;
	little = (char *)to_find;
	if (little[b] == '\0')
		return (big);
	while (big[i] != '\0' && i < len)
	{
		b = 0;
		while (big[i + b] == little[b] && (i + b) < len)
		{
			if (little[b + 1] == '\0')
				return (&big[i]);
			b++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "HOLA";
	char to_find1[] = "L";
	char to_find2[] = "OL"; 
	char to_find3[] = "";      

	char *result;

	result = ft_strnstr(str, to_find1, 4);
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado: %s\n", to_find1);

	result = ft_strnstr(str, to_find2, 2);
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado: %s\n", to_find2);

	result = ft_strnstr(str, to_find3, 25);
	if (result)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado: %s\n", to_find3);

	return 0;
}*/
