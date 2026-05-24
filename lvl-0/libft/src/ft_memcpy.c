#include "../include/libft.h"

/**
 * Copy byte by byte, avoiding overlapping
 * C standard mandates using unsigned char * for raw memory operations
 */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;
    size_t              i;

    if (!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

/* int main(void)
{
    char src[] = "Hello, 42!";
    char dest1[11];
    char dest2[11];

    ft_memcpy(dest1, src, 11);
    memcpy(dest2, src, 11);
    printf("ft_memcpy: %s\n", dest1);
    printf("   memcpy: %s\n", dest2);
    printf("    match: %s\n", memcmp(dest1, dest2, 11) == 0 ? "YES" : "NO");
    return (0);
} */