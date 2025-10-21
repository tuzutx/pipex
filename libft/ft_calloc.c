/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:23:16 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/29 19:04:31 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nitem, size_t size)
{
	void	*mem;

	mem = malloc(nitem * size);
	if (!mem)
		return (NULL);
	else
		return (ft_memset(mem, 0, nitem * size));
}

/* int	main(void)
{
	size_t	n = 0;
	int		*arr;
	size_t	i;

	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("ft_calloc ha devuelto NULL\n");
		return (1);
	}
	printf("Contenido del array reservado con ft_calloc:\n");
	for (i = 0; i < n; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);

	free(arr);
	return (0);
} */
