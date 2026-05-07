#include "../include/libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char *s2;

    len = 0;
    while (s[len])
        len++;
    s2 = (char *)malloc(sizeof(char) * (len + 1)); // + 1 includes end on string '\0'
    if (!s2)
        return (NULL);
    i = 0;
    while (s[i])
    {
        s2[i] = s[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

/* int main(void)
{
    char *s1;

    s1 = "monolith";
    printf("%s\n", ft_strdup(s1));
    return (0);
} */
