/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:06:47 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/11 12:20:35 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
int main(void)
{
    char test_vals[] = {'A', 'a', '0', 127, 164, 128, 255};
    int num_tests = sizeof(test_vals) / sizeof(test_vals[0]);

    for (int i = 0; i < num_tests; i++) {
        unsigned char ch = test_vals[i]; 
        if (ft_isascii(ch))
            printf("'%c' (%d) es ASCII.\n", ch, ch);
        else
            printf("'%c' (%d) NO es ASCII.\n", ch, ch);
    }

    return 0;
}*/
