/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:40:39 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 13:18:24 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*container;

	container = malloc(sizeof(t_list));
	if (!container)
		return (NULL);
	container->content = content;
	container->next = NULL;
	return (container);
}
/*
int main(void)
{
    char *str = strdup("Hola Mundo");
    t_list *nodo_str = ft_lstnew(str);
    printf("---- Test con string ----\n");
    if (nodo_str && nodo_str->content)
        printf("Contenido: %s\n", (char *)nodo_str->content);
    else
        printf("Contenido: NULL\n");
    printf("Next: %p\n\n", (void *)nodo_str->next);

    int *num = malloc(sizeof(int));
    if (!num) return 1;
    *num = 42;
    t_list *nodo_int = ft_lstnew(num);
    printf("---- Test con int ----\n");
    if (nodo_int && nodo_int->content)
        printf("Contenido: %d\n", *(int *)nodo_int->content);
    else
        printf("Contenido: NULL\n");
    printf("Next: %p\n\n", (void *)nodo_int->next);

    t_list *nodo_null = ft_lstnew(NULL);
    printf("---- Test con NULL ----\n");
    if (nodo_null && nodo_null->content)
        printf("Contenido: %p\n", nodo_null->content);
    else
        printf("Contenido: NULL\n");
    printf("Next: %p\n\n", (void *)nodo_null->next);

    free(nodo_str->content);
    free(nodo_str);
    free(nodo_int->content);
    free(nodo_int);
    free(nodo_null);

    return 0;
}*/
