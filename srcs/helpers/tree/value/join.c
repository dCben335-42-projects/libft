/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:12:53 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/17 20:16:09 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * @brief Calculates the length of the values in the tree.
 * 
 * @param tree The current node in the tree.
 * @param sep_len The length of the separator.
 * @param count The number of values left to process.
 * 
 * @return The total length of the values in the tree.
 * 
 * @note The function also decrements the count of values left to process so you
 * 	 should pass a copy of the count before calling this function.
 */
static size_t	tree_valueslen(t_tree *tree, size_t sep_len, size_t *count)
{
	size_t	len;

	len = 0;
	if (!tree)
		return (0);
	len += tree_valueslen(tree->left, sep_len, count);
	if (*count == 0)
		return (len);
	len += ft_strlen(tree->value);
	if (*count > 1)
		len += sep_len;
	(*count)--;
	len += tree_valueslen(tree->right, sep_len, count);
	return (len);
}

/**
 * @brief Concatenates the values of the tree into a single string.
 *
 * @param tree The root node of the tree.
 * @param cursor The cursor to the current position in the string.
 * @param sep The separator to use between values.
 * @param count The number of values left to process.
 * 
 * @note The function assumes that the cursor points to a valid memory location
 *       with enough space to hold the concatenated values.
 * 
 * @note The function also decrements the count of values left to process so you
 * 	 should pass a copy of the count before calling this function.
 */
static void	tree_valuescpy(
	t_tree *tree,
	char **cursor,
	const char *sep,
	size_t *count
)
{
	if (!tree || *count == 0)
		return ;
	tree_valuescpy(tree->left, cursor, sep, count);
	if (*count == 0)
		return ;
	*cursor = ft_stpcpy(*cursor, tree->value);
	if (*count > 1)
		*cursor = ft_stpcpy(*cursor, sep);
	(*count)--;
	tree_valuescpy(tree->right, cursor, sep, count);
}

/**
 * @brief Joins the values of the tree into a single string with a separator.
 *
 * @param tree The root node of the tree.
 * @param sep The separator to use between values. (can be NULL)
 * 
 * @return A new string containing the joined values.
 */
char	*tree_valuesjoin(t_tree *tree, const char *sep, size_t count)
{
	char	*new;
	char	*cursor;
	size_t	sep_len;
	size_t	count_cpy;

	if (!tree || !count)
		return (NULL);
	sep_len = 0;
	if (sep)
		sep_len = ft_strlen(sep);
	count_cpy = count;
	new = malloc((tree_valueslen(tree, sep_len, &count) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[0] = '\0';
	cursor = new;
	tree_valuescpy(tree, &cursor, sep, &count_cpy);
	return (new);
}
