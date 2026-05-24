#include "../include/libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;
    size_t               i;

    if (!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d > s) // copy backwards
    {
        i = n;
        while (i--)
            d[i] = s[i];
    }
    else // copy forward
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return ((void *)d);
}
