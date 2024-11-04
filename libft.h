#define LIBFT_H
# ifndef LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void * destination, const void * source, size_t size);
// char    *strlcpy
// char    *strlcat
// char    *toupper
// char    *tolower
// strchr
// strrchr
int strncmp(char *s1, char *s2, int n);
// memchr
// memcmp
// strnstr
// atoi

# endif