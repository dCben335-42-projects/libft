/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:29:24 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 17:11:49 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * @brief Reads a tree node and applies a function to its value.
 *
 * @param node The tree node to read.
 * @param prefix The prefix to add before the key.
 * @param f The function to read the node value.
 * @param fd The file descriptor to write to.
 */
void	read_tree_node(t_tree_node *node, const char *prefix,
	int f(void *, int), int fd)
{
	if (!node)
		return ;
	if (prefix)
		ft_putstr_fd(prefix, fd);
	ft_putstr_fd(node->key, fd);
	ft_putchar_fd('=', fd);
	if (f && node->value)
		f(node->value, fd);
	ft_putchar_fd('\n', fd);
}

/**
 * @brief Reads the tree in-order and applies a function to each node.
 *
 * @param tree The tree to read.
 * @param prefix The prefix to add before each key.
 * @param f The function to read each node value.
 * @param fd The file descriptor to write to.
 */
void	read_tree(t_tree *tree, const char *prefix,
	int f(void *, int), int fd)
{
	if (!tree)
		return ;
	read_tree(tree->left, prefix, f, fd);
	read_tree_node(tree, prefix, f, fd);
	read_tree(tree->right, prefix, f, fd);
}
