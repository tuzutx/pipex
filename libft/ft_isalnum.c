/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:57:24 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 19:28:55 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_isalnum(int c)
{
	if (c < 48 || c > 122)
		return (0);
	else if (c < 'A' && c > '9')
		return (0);
	else if (c < 'a' && c > 'Z')
		return (0);
	return (1);
}
/* 
int main(void)
{
    char a = '9';
    char a1 = 'A';
    char a2 = '!';
    char a3 = 0;
    char a4 = ' ';

    int result1 = ft_isalnum(a);
    int result2 = ft_isalnum(a1);
    int result3 = ft_isalnum(a2);
    int result4 = ft_isalnum(a3);
    int result5 = ft_isalnum(a4);

    if (result1 == 1)
        write(1, "El primero es alfanumerico\n", 28);
    else
        write(1, "El primero no es alfanumerico\n", 31);
    if (result2 == 1)
        write(1, "El 2 es alfanumerico\n", 22);
    else
        write(1, "El 2 no es alfanumerico\n", 2);;
    if (result3 == 1)
        write(1, "El 3 es alfanumerico\n", 22);
    else
        write(1, "El 3 no es alfanumerico\n", 25);
    if (result4 == 1)
        write(1, "El 4 es alfanumerico\n", 22);
    else
        write(1, "El 4 no es alfanumerico\n", 25);
    if (result5 == 1)
        write(1, "El 5 es alfanumerico\n", 22);
    else
        write(1, "El 5 no es alfanumerico\n", 25);
} */
