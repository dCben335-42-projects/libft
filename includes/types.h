/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:59:48 by bcabocel          #+#    #+#             */
/*   Updated: 2025/03/11 20:10:15 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stddef.h>

# define INT_MIN -2147483648
# define INT_MIN_STR "-2147483648"
# define INT_MIN_LEN 11

# define INT_MAX 2147483647
# define INT_MAX_STR "2147483647"
# define INT_MAX_LEN 10

# define UINT_MAX 4294967295
# define UINT_MAX_STR "4294967295"
# define UINT_MAX_LEN 10

# define LONG_MIN -9223372036854775808
# define LONG_MIN_STR "-9223372036854775808"
# define LONG_MIN_LEN 20

# define LONG_MAX 9223372036854775807
# define LONG_MAX_STR "9223372036854775807"
# define LONG_MAX_LEN 19

# define ULONG_MAX 18446744073709551615
# define ULONG_MAX_STR "18446744073709551615"
# define ULONG_MAX_LEN 20

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0,
}	t_bool;

#endif