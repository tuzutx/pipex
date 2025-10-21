/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:21:05 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 13:34:21 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
    t_list *nodo1 = ft_lstnew(strdup("Primero"));
    t_list *nodo2 = ft_lstnew(strdup("Segundo"));
    t_list *nodo3 = ft_lstnew(strdup("Tercero"));

    t_list *lista = NULL;
    ft_lstadd_front(&lista, nodo3);
    ft_lstadd_front(&lista, nodo2);
    ft_lstadd_front(&lista, nodo1);

    t_list *ultimo = ft_lstlast(lista);
    if (ultimo && ultimo->content)
        printf("Último nodo: %s\n", (char *)ultimo->content);
    else
        printf("La lista está vacía o el nodo es NULL\n");

    free(nodo1->content);
    free(nodo1);
    free(nodo2->content);
    free(nodo2);
    free(nodo3->content);
    free(nodo3);

    return 0;
}*/
