/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:16:06 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/05 19:56:11 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_include(const char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (TRUE);
		charset++;
	}
	return (FALSE);
}

static size_t	ft_countwords(const char *s, const char *charset)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && ft_include(charset, *s))
			s++;
		if (*s)
			count++;
		while (*s && !ft_include(charset, *s))
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, const char *charset)
{
	size_t	len;

	len = 0;
	while (s[len] && !ft_include(charset, s[len]))
		len++;
	return (len);
}

/**
 * @brief Splits a string into an array of strings based on a delimiter.
 *
 * @param s The string to split.
 * @param charset The delimiter characters to split the string by.
 * @return An array of strings with a NULL terminator at the end.
 * Returns NULL if memory allocation fails or if the input string is NULL.
 */
char	**ft_split(const char *s, const char *charset)
{
	char		**split;
	size_t		i;
	size_t		w_len;

	if (!s || !charset)
		return (NULL);
	split = malloc((ft_countwords((char *)s, charset) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && ft_include(charset, *s))
			s++;
		if (!*s)
			break ;
		w_len = ft_wordlen(s, charset);
		split[i] = ft_substr(s, 0, w_len);
		if (!split[i])
			return (ft_strsfree(split));
		s += w_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
