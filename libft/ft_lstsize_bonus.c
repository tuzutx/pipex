/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:09:47 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 13:30:33 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main(void)
{
    t_list *nodo1 = ft_lstnew(strdup("Nodo 1"));
    t_list *nodo2 = ft_lstnew(strdup("Nodo 2"));
    t_list *nodo3 = ft_lstnew(strdup("Nodo 3"));

    t_list *lista = NULL;
    ft_lstadd_front(&lista, nodo3);
    ft_lstadd_front(&lista, nodo2);
    ft_lstadd_front(&lista, nodo1);

    int size = ft_lstsize(lista);
    printf("Tamaño de la lista: %d\n", size);

    free(nodo1->content);
    free(nodo1);
    free(nodo2->content);
    free(nodo2);
    free(nodo3->content);
    free(nodo3);

    return 0;
}*/
