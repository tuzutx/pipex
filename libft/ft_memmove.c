/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:44:19 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/11 11:59:26 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	char	*dest;
	char	*src;
	size_t	i;
	int		size;

	i = 0;
	size = (int)numBytes - 1;
	dest = (char *)dest_str;
	src = (char *)src_str;
	while (i < numBytes && size > -1)
	{
		if (dest < src)
			dest[i] = src[i];
		else if (dest > src)
		{
			dest[size] = src[size];
			size--;
		}
		i++;
	}
	return (dest);
}
/*
int main () 
{
   char dest_str[] = "oldstring";
   const char src_str[]  = "newstring";
   printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
   ft_memmove(dest_str, src_str, 9);
   printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
   return(0);
}*/
/*
int main() 
{ 
	char dest_str[] = "Tutorialspoint"; 
	char src_str[] = "Tutors";

	puts("source string [src_str] before memmove:-"); 
	puts(dest_str); 

	ft_memmove(dest_str, src_str, sizeof(src_str)); 

	puts("\nsource string [src_str] after memmove:-"); 
	puts(dest_str); 
	return 0; 
}*/
/*
int main(void)
{
	char buffer[] = "123456";

	printf("Antes de memmove: %s\n", buffer);

	// Copia 4 bytes desde buffer[0] a buffer[2]
	// Esto crea solapamiento porque src y dest se cruzan
	ft_memmove(buffer + 2, buffer, 4);

	printf("Después de memmove: %s\n", buffer);

	return 0;
}*/
