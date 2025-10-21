/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:36:56 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/23 10:59:14 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*d;
	char	*s;
	size_t	counter;

	d = (char *)dest;
	s = (char *)src;
	counter = 0;
	if (d == s)
		return (d);
	while (counter < count)
	{
		d[counter] = s[counter];
		counter++;
	}
	return (d);
}
/*
int main() 
{
	char first_str[] = "";
	char sec_str[] = "";

	puts("first_str before memcpy:");
	puts(first_str);

	// Copy the content of first_str to sec_str
	ft_memcpy(first_str, sec_str, sizeof(sec_str));

	puts("\nfirst_str after memcpy:");
	puts(first_str);

	return 0;
}*/
