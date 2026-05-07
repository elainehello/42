#include "../include/libft.h"

int      ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    if (n == 0)
        return (0);
    i = 0;
    while (i < n - 1 && s1[i] && (s1[i] == s2[i]))
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int main(void)
{
    char *s1 = "HOLA";
    char *s2 = "HOLa";

    printf("diff %d\n", ft_strncmp(s1, s2, 4));
    return (0);
} */
