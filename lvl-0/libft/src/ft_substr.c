#include "../include/libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  slen;
    size_t  i;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= len)
        return (ft_strdup(""));
    if (len > slen - start)
        len = slen - start;
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}

int main(void)
{
    char *s1 = "lorem ipsum";
    char *s2 = "ipsum lorem";
    char *s3 = "losum iprem";

    printf("start major than length %s", ft_substr(s1, 12, 12));
    printf("len major than str minus start %s", ft_substr(s2))
    return (0);
}
