/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:40:58 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/11 12:23:31 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
int main(void)
{
    char test_chars[] = {'A', 'z', '5', '!', ' ', '\n', '0'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        if (ft_isdigit(c))
            printf("'%c' es digito.\n", c);
        else
            printf("'%c' NO es digito.\n", c);
    }

    return 0;
}*/
