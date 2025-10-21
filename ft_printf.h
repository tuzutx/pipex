/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolaeche <nolaeche@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:52:44 by nolaeche          #+#    #+#             */
/*   Updated: 2025/09/05 19:54:00 by nolaeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_if_x(va_list args);
int	ft_if_xmayus(va_list args);
int	ft_if_c(va_list args);
int	ft_if_s(va_list args);
int	ft_if_id(va_list args);
int	ft_if_u(va_list args);
int	ft_if_p(va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
#endif
