/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:51:23 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/17 14:47:44 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_nblen(long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (counter = 1);
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

void	ft_negative(long *n, int *negative)
{
	if (*n < 0)
		*negative = 1;
	if (*negative)
		*n *= -1;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		negative;
	int		len;
	long	nlong;

	negative = 0;
	nlong = n;
	ft_negative(&nlong, &negative);
	len = (ft_nblen(nlong) + negative + 1);
	str = malloc(len);
	if (!str)
		return (NULL);
	len--;
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (nlong > 0)
	{
		str[--len] = ((nlong % 10) + 48);
		nlong /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
/*
int main(void)
{
    int test_values[] = {0, 123, -456, 2147483647, -2147483648};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    char *result;

    for (int i = 0; i < num_tests; i++)
    {
        result = ft_itoa(test_values[i]);
        if (result != NULL)
        {
            printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
            free(result); // No olvides liberar la memoria
        }
        else
        {
            printf("ft_itoa(%d) devolvió NULL\n", test_values[i]);
        }
    }

    return 0;
}*/
