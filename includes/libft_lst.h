/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:58:09 by bcabocel          #+#    #+#             */
/*   Updated: 2025/08/19 18:29:18 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

typedef struct s_lst
{
	void			*content;
	struct s_lst	*next;
}	t_lst;

t_lst			*init_lst(void *content);
void			lst_add_front(t_lst **alst, t_lst *new);
int				get_lst_size(t_lst *lst);
t_lst			*get_lst_last(t_lst *lst);
void			lst_add_back(t_lst **lst, t_lst *new);
void			ft_lstdelone(t_lst *lst, void (*del)(void *));
void			*destroy_lst(t_lst **lst, void (*del)(void *));
void			ft_lstiter(t_lst *lst, void (*f)(void *));
t_lst			*ft_lstmap(t_lst *lst,
					void *(*f)(void *), void (*del)(void *));

#endif