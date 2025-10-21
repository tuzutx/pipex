/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:49:43 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 14:31:25 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*aux;

	if ((!lst) || (!del))
		return ;
	if (!(*lst))
		return ;
	temp = *lst;
	while (temp->next)
	{
		del(temp->content);
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	del(temp->content);
	aux = temp->next;
	free(temp);
	temp = aux;
	*lst = NULL;
}
/*
void eliminar_contenido(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lista = NULL;

    t_list *nodo1 = ft_lstnew(strdup("Nodo 1"));
    t_list *nodo2 = ft_lstnew(strdup("Nodo 2"));
    t_list *nodo3 = ft_lstnew(strdup("Nodo 3"));

    ft_lstadd_back(&lista, nodo1);
    ft_lstadd_back(&lista, nodo2);
    ft_lstadd_back(&lista, nodo3);

    printf("Lista antes de ft_lstclear:\n");
    t_list *temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    ft_lstclear(&lista, eliminar_contenido);

    if (lista == NULL)
        printf("\nLista después de ft_lstclear: lista es NULL ✅\n");
    else
        printf("\nLista después de ft_lstclear: lista NO es NULL ❌\n");

    return 0;
}*/
