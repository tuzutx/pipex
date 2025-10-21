/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:30:26 by egaguirr          #+#    #+#             */
/*   Updated: 2025/04/23 13:16:38 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			length;

	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	if (length - start < len)
		len = length - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (start > length)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
    const char *texto = "Hola, esto es una prueba";
    
    char *sub1 = ft_substr(texto, 7, 4);
    char *sub2 = ft_substr(texto, 0, 4);
    char *sub3 = ft_substr(texto, 11, 100);
    char *sub4 = ft_substr(texto, 30, 5);

    printf("Sub1: %s\n", sub1);
    printf("Sub2: %s\n", sub2);
    printf("Sub3: %s\n", sub3);
    printf("Sub4: %s\n", sub4);

    free(sub1);
    free(sub2);
    free(sub3);
    free(sub4);

    return 0;
}*/
