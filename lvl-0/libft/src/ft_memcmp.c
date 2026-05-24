#include "../include/libft.h"

int      ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a;
    const unsigned char *b;
    size_t              i;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (a[i] != b[i])
            return (a[i] - b[i]);
        i++;
    }
    return (0); // quit successfully
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
    printf("    match: %s\n", ft_memcmp(dest1, dest2, 11) == 0 ? "YES" : "NO");
    return (0);
} */