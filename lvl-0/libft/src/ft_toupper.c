#include "../include/libft.h"

int     ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - ('a' - 'A'));
    return (c);
}

/* int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            printf("%c\n", ft_toupper(argv[1][i]));
            i++;
        }
    }
    else
        printf("missing argument\n");
    return (0);
} */
