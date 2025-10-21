/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:57:00 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 14:16:02 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if ((!lst) || (!del))
		return ;
	del(lst->content);
	free(lst);
}
/*
void eliminar_contenido(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lista = NULL;

    t_list *nodo1 = ft_lstnew(strdup("Primero"));
    t_list *nodo2 = ft_lstnew(strdup("Segundo"));
    t_list *nodo3 = ft_lstnew(strdup("Tercero"));

    ft_lstadd_back(&lista, nodo1);
    ft_lstadd_back(&lista, nodo2);
    ft_lstadd_back(&lista, nodo3);

    printf("Lista antes de eliminar:\n");
	t_list *temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)lista->content);
        temp = temp->next;
    }

    //nodo1->next = nodo3;
    ft_lstdelone(nodo2, eliminar_contenido);

    printf("\nLista después de eliminar el nodo 2:\n");
	temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    free(nodo1->content);
    free(nodo1);
    free(nodo3->content);
    free(nodo3);

    return 0;
}*/
