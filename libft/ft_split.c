/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:32:52 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 11:04:49 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strnlen(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

int	ft_wordcounter(char const *s, char c)
{
	int	i;
	int	count;
	int	inword;

	i = 0;
	count = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c && inword == 0)
		{
			inword = 1;
			count++;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (count);
}

char	*ft_word(int *i, char const *s, char c)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(ft_strnlen(s, c, *i) + 1);
	if (!word)
		return (NULL);
	while (s[*i] != '\0' && s[*i] != c)
	{
		word[j++] = s[*i];
		(*i)++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_result(char const *s, char c, char **result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			result[j] = ft_word(&i, s, c);
			if (!result[j])
			{
				while (j > 0)
					free(result[--j]);
				free(result);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_wordcounter(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	result = ft_result(s, c, result);
	return (result);
}
/*
int main() {
    const char *s = "HOLA MUNDO";
    char delim = ' ';

    char **result = ft_split(s, delim);
    if (result) {
        // Imprimir las palabras
        for (int i = 0; result[i] != NULL; i++) {
            printf("Palabra %d: '%s'\n", i, result[i]);
        }

        // Liberamos la memoria de las palabras
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]); // Liberamos cada palabra
        }

        // Liberamos el array de punteros
        free(result);
    } else {
        printf("Error al dividir el string\n");
    }

    return 0;
}*/
