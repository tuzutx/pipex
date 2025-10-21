/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:33:26 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 14:34:30 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void a_mayusculas(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
}

int main(void)
{
    t_list *nodo1 = ft_lstnew(strdup("hola"));
    t_list *nodo2 = ft_lstnew(strdup("mundo"));
    t_list *nodo3 = ft_lstnew(strdup("42"));

    t_list *lista = NULL;
    ft_lstadd_back(&lista, nodo1);
    ft_lstadd_back(&lista, nodo2);
    ft_lstadd_back(&lista, nodo3);

    printf("Antes de ft_lstiter:\n");
    t_list *temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    ft_lstiter(lista, a_mayusculas);

    printf("\nDespués de ft_lstiter:\n");
    temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    ft_lstclear(&lista, free);

    return 0;
}*/
