/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:16:06 by bcabocel          #+#    #+#             */
/*   Updated: 2025/02/10 19:34:10 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_splitfree(char **split, ssize_t count)
{
	while (count >= 0)
		free(split[count--]);
	free(split);
	return (NULL);
}

static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		i;
	size_t		w_len;

	split = malloc((ft_countwords((char *)s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		w_len = ft_wordlen(s, c);
		split[i] = ft_substr(s, 0, w_len);
		if (!split[i])
			return (ft_splitfree(split, (ssize_t)i - 1));
		s += w_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
