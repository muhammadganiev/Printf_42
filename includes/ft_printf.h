/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <gf.black.tv@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:51:49 by muganiev          #+#    #+#             */
/*   Updated: 2022/06/23 14:44:10 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *s, ...);
int	print_char(va_list args);
int	print_str(va_list args);
int	print_int(va_list args);
int	print_uint(va_list args);
int	print_hex(va_list args, char c);
int	print_pointer(va_list args);

#endif