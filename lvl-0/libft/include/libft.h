#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h> // size_t
#include <stdio.h>

// (Character type) ctype.h ref
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_toascii(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

// (Standard library) stdlib.h ref
int     ft_atoi(const char *nptr);
int     ft_calloc(size_t nmemb, size_t size);

// (String) string.h ref perform tasks on strings
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t   ft_strlen(const char *s);
int      ft_strncmp(const char *s1, const char *s2, size_t n);

// (Strings) strings.h ref (with an 's') standard functions for memory manipulation
void    ft_bzero(void *s, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int      ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);

#endif
