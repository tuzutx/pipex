/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:46:36 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/25 12:11:33 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				counter;
	char			*str;
	unsigned char	ch;

	str = (char *)s;
	counter = ft_strlen(str);
	ch = (unsigned char)c;
	while (counter > -1)
	{
		if (str[counter] == ch)
			return (&str[counter]);
		else
			counter--;
	}
	return (NULL);
}

/*int main() 
{
   const char *str = "ALOHA";
   char ch = 321;

   char *p = ft_strrchr(str, ch);

   if (p != NULL) 
   {
	   printf("String finishing from '%c' is: %s\n", ch, p);
   } 
   else 
   {
	   printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
