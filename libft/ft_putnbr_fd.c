/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:28:16 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/17 16:34:22 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_negative(int *n, int *negative)
{
	if (*n < 0)
		*negative = 1;
	if (*negative)
		*n *= -1;
}

void	ft_putnbr_fd(int n, int fd)
{
	int		negative;
	char	c;

	negative = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	ft_negative(&n, &negative);
	if (negative)
		write(fd, "-", 1);
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + 48;
	write(fd, &c, 1);
}
/*
int main(void)
{
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
    
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);
    
    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);
    
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
    
    ft_putnbr_fd(12345, 2);
    write(2, "\n", 1);
    
    return (0);
}*/
