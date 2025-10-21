/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:10:39 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/17 14:44:36 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c < ' ' || c > 126)
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
        if (ft_isalnum(c))
            printf("'%c' es alfanumérico.\n", c);
        else
            printf("'%c' NO es alfanumérico.\n", c);
    }

    return 0;
}*/
