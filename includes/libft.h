/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcabocel <bcabocel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:27:08 by bcabocel          #+#    #+#             */
/*   Updated: 2025/06/10 00:38:54 by bcabocel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "stdlib.h"
# include "unistd.h"
# include "libft_types.h"
# include "libft_lst.h"

// is
t_bool			ft_isalpha(int c);
t_bool			ft_isloweralpha(int c);
t_bool			ft_isupperalpha(int c);
t_bool			ft_isdigit(int c);
t_bool			ft_isalnum(int c);
t_bool			ft_isascii(int c);
t_bool			ft_isprint(int c);
t_bool			ft_isspace(int c);
t_bool			ft_isinbase(char *base, char c);
t_bool			ft_isnumber(char *str, t_bool is_long);
t_bool			ft_isinclude(const char *charset, char c);

// put
int				ft_putchar_fd(const char c, const int fd);
int				ft_putendl_fd(const char *s, const int fd);
int				ft_putnbr_base_fd(const int n, const char *base, const int fd);
int				ft_putstr_fd(const char *s, const int fd);
int				ft_putull_base_fd(const size_t nb,
					const char *base, const size_t base_len, const int fd);

// sort
void			ft_isort(char **array, size_t count,
					int (*cmp)(const char *, const char *), t_bool is_reverse);

// split
char			**ft_split(const char *s, const char *charset);
int				ft_strscount(char **split);

// str
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strcasecmp(const char *a, const char *b);
int				ft_strncasecmp(const char *a, const char *b, size_t n);

size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_stpcpy(char *dest, const char *src);
char			*ft_strcat(char *dest, const char *src);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *ptr, int ch, size_t count);

void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

void			ft_strnegate(char **str, const char *charset);
void			ft_strpositivate(char **str, const char *charset);

// strs
char			**ft_strsaddprefix(const char *prefix, char **content);
char			**ft_strsaddsuffix(const char *suffix, char **content);

size_t			ft_strslen(const char **strs, size_t count, size_t sep_len);
void			ft_strscat(char *dest, const char **strs, size_t count,
					const char *sep);
char			*ft_strsjoin(const char **strs, size_t count, const char *sep);
void			*ft_strsfree(char **strs);

// to
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi_base(const char *str, char *base);
long			ft_atol_base(const char *str, char *base);
char			*ft_itoa_base(int n, char *base);

//utils
int				ft_intlen_base(int n, size_t base_len);
void			*ft_free(void **ptr);
t_bool			ft_fnmatch(const char *pattern, const char *str);
const char		*ft_strskip(const char *str, char c);

#endif