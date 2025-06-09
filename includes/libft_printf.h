/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:34:18 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:28:16 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_flag_map
{
	char	c;
	int		(*f)(va_list);
}	t_flag_map;

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);

// put
int		ft_putchar_fd(const char c, const int fd);
int		ft_putendl_fd(const char *s, const int fd);
int		ft_putnbr_base_fd(const int n, const char *base, const int fd);
int		ft_putstr_fd(const char *s, const int fd);
int		ft_putull_base_fd(const size_t nb,
			const char *base, const size_t base_len, const int fd);

// flag callbacks
int		ft_print_char(va_list ap);
int		ft_print_string(va_list ap);
int		ft_print_pointer(va_list ap);
int		ft_print_int(va_list ap);
int		ft_print_int(va_list ap);
int		ft_print_unsigned_int(va_list ap);
int		ft_print_hex(va_list ap);
int		ft_print_hex_upper(va_list ap);
int		ft_print_percent(va_list ap);

#endif	