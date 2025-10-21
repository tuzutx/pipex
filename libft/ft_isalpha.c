/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:39:56 by nolaeche          #+#    #+#             */
/*   Updated: 2025/04/11 12:11:12 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z')
	{
		return (0);
	}
	else if (c > 'Z' && c < 'a')
	{
		return (0);
	}
	return (1);
}
/*
int main(void)
{
    char test_chars[] = {'A', 'z', '5', '!', ' ', '\n', '0'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        if (ft_isalpha(c))
            printf("'%c' es alfabetico.\n", c);
        else
            printf("'%c' NO es alfabetico.\n", c);
    }

    return 0;
}*/
