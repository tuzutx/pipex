/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:17:56 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 11:06:03 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_firstjoin(char *str, int *i, const char *s1)
{
	while (s1[*i] != '\0')
	{
		str[*i] = s1[*i];
		*i = *i + 1;
	}
	*i = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	int		i;

	i = 0;
	if ((!s1) || (!s2))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (__SIZE_MAX__ < len1 + len2 - 1)
		return (NULL);
	str = (char *)malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_firstjoin(str, &i, s1);
	while (s2[i] != '\0')
	{
		str[len1] = s2[i];
		len1++;
		i++;
	}
	str[len1] = '\0';
	return (str);
}
/*
int	main(void)
{
    const char *s1 = "Hola, ";
    const char *s2 = "mundo!";
    char *resultado;

    resultado = ft_strjoin(s1, s2);
    if (resultado != NULL)
    {
        printf("Resultado de ft_strjoin: %s\n", resultado);
        free(resultado); // No olvides liberar la memoria
    }
    else
    {
        printf("Error: ft_strjoin devolvió NULL.\n");
    }

    return 0;
}*/
