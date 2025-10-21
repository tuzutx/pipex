/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:49:25 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/17 19:13:35 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen_atoi(const char *str, int *i)
{
	int	counter;
	int	newi;

	counter = 0;
	newi = *i;
	if (str[newi] == '-' || str[newi] == '+')
	{
		counter++;
		newi++;
	}
	while (str[newi] != '\0' && (str[newi] >= '0' && str[newi] <= '9'))
	{
		counter++;
		newi++;
	}
	return (counter);
}

int	ft_strcmp(char const *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (s1[i] - s2[i]);
	if (s2[i] == '\0' && s1[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_firstcharcter(const char *n, int *i, int *len, int *negative)
{
	if (n[*i] == '-')
		(*negative)++;
	if (n[*i] == '-' || n[*i] == '+')
	{
		(*i)++;
		(*len)--;
	}
}

void	ft_loop(const char *n, int *result, int *i, int *len)
{
	while (n[*i] != '\0' && (n[*i] < ':' && n[*i] > '/'))
	{
		*result += n[*i] - 48;
		if (*len > 1)
		{
			*result *= 10;
			(*len)--;
		}
		(*i)++;
	}
}

int	ft_atoi(const char *n)
{
	int	i;
	int	len;
	int	result;
	int	negative;

	i = 0;
	result = 0;
	negative = 0;
	while (n[i] == ' ')
		i++;
	if (ft_strcmp(n + i, "-2147483648") == 0)
		return (result -= 2147483648);
	len = ft_strlen_atoi(n, &i);
	ft_firstcharcter(n, &i, &len, &negative);
	ft_loop(n, &result, &i, &len);
	if (negative)
		result *= -1;
	return (result);
}
/*
int	main()
{
	int value1 = ft_atoi("  -214748");
	int	value2 = ft_atoi("   +788  ");
	int	value3 = ft_atoi("   -657");
	int	value4 = ft_atoi("  42");
	int	value5 = ft_atoi(" 89w0");

	printf("primer valor %d\nsegundo valor %d\ntercer valor	%d\n \
		cuarto valor %d\nquinto valor %d\n", \
		value1, value2, value3, value4, value5);
	return (0);
}*/
