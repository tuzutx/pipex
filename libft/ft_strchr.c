/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:03:41 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/25 12:09:52 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				counter;
	char			*str;
	unsigned char	ch;

	str = (char *)s;
	counter = 0;
	ch = (unsigned char)c;
	while (str[counter] != '\0')
	{
		if (str[counter] == ch)
			return (&str[counter]);
		else
			counter++;
	}
	if (str[counter] == c)
		return (&str[counter]);
	return (NULL);
}

/*int main() 
{
   const char *str = "ALOHA";
   char ch = 'A';
   // Find the first occurrence of 'u' in the string
   char *p = ft_strchr(str, ch);

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
