/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:30:46 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 13:37:26 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if ((!lst) || (!new))
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
/*
int main(void)
{
    t_list *lista = NULL;

    t_list *nodo1 = ft_lstnew(strdup("Primero"));
    t_list *nodo2 = ft_lstnew(strdup("Segundo"));
    t_list *nodo3 = ft_lstnew(strdup("Tercero"));

    ft_lstadd_back(&lista, nodo1);
    ft_lstadd_back(&lista, nodo2);
    ft_lstadd_back(&lista, nodo3);

    printf("---- Lista enlazada ----\n");
    t_list *temp = lista;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    free(nodo1->content);
    free(nodo1);
    free(nodo2->content);
    free(nodo2);
    free(nodo3->content);
    free(nodo3);

    return 0;
}*/
