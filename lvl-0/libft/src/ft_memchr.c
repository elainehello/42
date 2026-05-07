#include "../include/libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (NULL);
}

/* int main(void)
{
    char *s = "third";
    int c = 'i';

    char *res = ft_memchr(s, c, ft_strlen(s));

    if (res)
    {
        printf("found: %c\n", *res);
        printf("remaining string: %s\n", res);
        printf("position: %ld\n", res - s);
    }
    else
        printf("character not found\n");
    return (0);
} */
