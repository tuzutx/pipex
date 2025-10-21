/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:48:48 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 14:39:35 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;
	t_list	*node_content;

	if ((!lst) || (!f) || (!del))
		return (NULL);
	newlist = NULL;
	temp = NULL;
	while (lst)
	{
		temp = f(lst->content);
		node_content = ft_lstnew(temp);
		if (!node_content)
		{
			del(temp);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node_content);
		lst = lst->next;
	}
	return (newlist);
}
/*
void *a_mayusculas(void *content)
{
    char *str = (char *)content;
    char *copy = strdup(str);

    if (!copy)
        return NULL;

    for (int i = 0; copy[i]; i++)
    {
        if (copy[i] >= 'a' && copy[i] <= 'z')
            copy[i] -= 32;
    }

    return copy;
}

void liberar_contenido(void *content)
{
    free(content);
}

int main(void)
{
    t_list *nodo1 = ft_lstnew(strdup("uno"));
    t_list *nodo2 = ft_lstnew(strdup("dos"));
    t_list *nodo3 = ft_lstnew(strdup("tres"));

    t_list *lista = NULL;
    ft_lstadd_back(&lista, nodo1);
    ft_lstadd_back(&lista, nodo2);
    ft_lstadd_back(&lista, nodo3);

    printf("Lista original:\n");
    t_list *temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    t_list *nueva = ft_lstmap(lista, a_mayusculas, liberar_contenido);

    printf("\nNueva lista (resultado de ft_lstmap):\n");
    temp = nueva;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    ft_lstclear(&lista, liberar_contenido);
    ft_lstclear(&nueva, liberar_contenido);

    return 0;
}*/
