#include "../include/libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (*s == (char )c)
        return ((char *)s);
    
    return (NULL);
}

/* int main(void)
{
    char *s = ft_strchr("hello", '\0');

    printf("%s\n", s);
    return (0);
} */
