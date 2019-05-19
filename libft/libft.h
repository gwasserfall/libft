#ifndef LIBFT__H_
#define LIBFT__H_
#include <string.h>

char    *ft_itoa(int n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strchr(const char *s, int c);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strnstr(char *haystack, char *needle, size_t len);
char    *ft_strstr(char *haystack, char *needle);
char    *strrchr(const char *s, int c);
char * ft_strnew(size_t size);
char *ft_strdup(const char *s1);
char *ft_strncat(char *dest, const char *src, size_t n);
char *strncpy(char *dest, const char *src, size_t n);
int     ft_atoi(char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strlen(char* str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_tolower(int c);
int     ft_toupper(int c);
void    *ft_memchr(void *s, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *dest, int val, size_t length);
void    ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);

#endif