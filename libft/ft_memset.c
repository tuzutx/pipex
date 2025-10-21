/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:39:05 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/09 15:41:43 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   puts(str);

   ft_memset(str, '#', 7);
   puts(str);
   
   return(0);
}*/
/*
int main() {
    char str[10] = "Hola Mundo";  // Cadena original

    printf("Antes de memset: %s\n", str);
    ft_memset(str, -200, 5);  // Llenar los primeros 5 caracteres con '#'
    printf("Después de memset: %s\n", str);

    return 0;
}*/
