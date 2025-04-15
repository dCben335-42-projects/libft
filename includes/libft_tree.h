/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:54:42 by bcabocel          #+#    #+#             */
/*   Updated: 2025/04/15 20:43:07 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TREE_H
# define LIBFT_TREE_H

# include "types.h"

typedef struct s_tree
{
	struct s_tree	*left;
	struct s_tree	*right;
	char			*key;
	void			*value;
	void			*(*value_destroyer)(void *);
	int				(*cmp)(const char *, const char *);
}	t_tree;

typedef t_tree	t_tree_node;

t_tree_node	*init_tree_node(char *key, void *value, \
	int (*cmp)(const char *, const char *), \
	void *(*value_destroyer)(void *));

t_tree		*add_existing_tree(t_tree *tree, char *key, void *value);
t_tree		*add_tree_node(t_tree **tree, t_tree_node *new);

size_t		get_size_tree(t_tree *tree);
t_tree_node	*get_tree_node(t_tree *tree, char *key);
t_tree_node	*get_tree_parent(t_tree *tree, t_tree_node *node);

void		*destroy_tree(t_tree *tree);
void		*destroy_tree_node(t_tree **tree, t_tree_node *node);

void		read_tree(t_tree *tree, const char *prefix, \
				int f(void *, int), int fd);
void		read_tree_node(t_tree_node *node, const char *prefix, \
				int f(void *, int), int fd);

#endif