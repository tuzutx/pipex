/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:47:18 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/23 11:17:23 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*str;

	str = (unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == (unsigned char)c)
			return (&str[counter]);
		else
			counter++;
	}
	return (NULL);
}
/*
int main() 
{
   const char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = ft_memchr(str, ch, 4);

   if (p != NULL) 
   {
	   printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
	   printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
