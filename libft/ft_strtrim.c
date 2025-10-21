/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:01:33 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/24 21:20:14 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char	*ft_loop(char *str, char const *set, char *check, int *i)
{
	int	j;

	j = 0;
	while (set[j] != '\0' && check == NULL)
	{
		if (str[*i] == set[j])
		{
			check = &str[++(*i)];
			i--;
		}
		else
			j++;
	}
	return (check);
}

char	*ft_secondloop(char *start, char const *set, char *check, int *i)
{
	int	j;

	j = 0;
	while (set[j] != '\0' && check == NULL)
	{
		if (start[*i] == set[j])
			check = &start[*i];
		else
			j++;
	}
	return (check);
}

char	*ft_startloop(char const *s1, char const *set, char *start)
{
	char	*check;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s1;
	check = NULL;
	while (s1[i])
	{
		check = ft_loop(str, set, check, &i);
		if (check)
		{
			start = check;
			check = NULL;
		}
		else
			i = ft_strlen(str);
	}
	if (!start)
		return (start = &str[0]);
	return (start);
}

int	ft_endingloop(char *start, char const *set)
{
	char	*check;
	int		h;
	int		i;

	h = 0;
	check = NULL;
	if (!start)
		return (i = 0);
	i = (ft_strlen(start) - 1);
	while (h == 0)
	{
		check = ft_secondloop(start, set, check, &i);
		if (check)
		{
			check = NULL;
			i--;
		}
		else
			h = 1;
	}
	if (i < 0)
		return (-1);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*str;
	int		i;

	i = 0;
	if ((!s1) || (!set))
		return (NULL);
	start = NULL;
	start = ft_startloop(s1, set, start);
	if (!start)
		return (start = "");
	i = ft_endingloop(start, set);
	str = malloc(i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, start, i + 2);
	return (str);
}
/*
int main(void)
{
    const char *original = "+++Hola Mundo+++";
    const char *set = "+";

    char *resultado = ft_strtrim(original, set);

    if (resultado != NULL)
    {
        printf("Original: \"%s\"\n", original);
        printf("Set: \"%s\"\n", set);
        printf("Resultado: \"%s\"\n", resultado);
        free(resultado); // No olvides liberar la memoria
    }
    else
    {
        printf("La función devolvió NULL\n");
    }

    return 0;
}*/
