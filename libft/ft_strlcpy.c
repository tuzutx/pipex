/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:42:54 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/14 15:30:57 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void) 
{
	char src[] = "Hola, mundo!";
	char dest1[20];
	char dest2[6];
	char dest3[1];
	char dest4[0];

	unsigned int len = ft_strlcpy(dest1, src, sizeof(dest1));
	printf("dest: \"%s\" (longitud de dest: %u)\n\n", dest1, len);
	len = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("dest: \"%s\" (longitud de dest: %u)\n\n", dest2, len);
	len = ft_strlcpy(dest3, src, sizeof(dest3));
	printf("dest: \"%s\" (longitud de dest: %u)\n\n", dest3, len);
	len = ft_strlcpy(dest4, src, sizeof(dest4));
	printf("dest: \"%s\" (longitud de dest: %u)\n\n", dest4, len);

	return 0;
}*/
