/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:29:24 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:04:27 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tree.h"
#include "libft.h"

/**
 * 
 * @brief Reads the tree in-order and applies a function to each node.
 *
 * @param tree The tree to read.
 * @param prefix The prefix to add before each key.
 * @param f The function to read each node value.
 * 
 * @param fd The file descriptor to write to.
 * 
 * @note The f parameter is a function that takes a tree node
 * @note if f is NULL, it will print the key of each node to the standard output.
 * 
*/
void	read_tree(t_tree *tree, void f(t_tree_node *))
{
	if (!tree)
		return ;
	read_tree(tree->left, f);
	if (f)
		f(tree);
	else
		ft_putendl_fd(tree->key, STDOUT_FILENO);
	read_tree(tree->right, f);
}
