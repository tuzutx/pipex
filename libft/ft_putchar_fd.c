/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:31:47 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/15 20:50:18 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    ft_putchar_fd('H', 1);
    ft_putchar_fd('o', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('a', 1);
    ft_putchar_fd('\n', 1); 

    ft_putchar_fd('E', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd('o', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd('\n', 2);

	return (0);
}*/
