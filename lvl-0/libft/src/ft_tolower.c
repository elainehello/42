#include "../include/libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    else
        return (c);
}


/* int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            printf("%c\n", ft_tolower(argv[1][i]));
            i++;
        }
    }
    else
        printf("missing argument\n");
    return (0);
} */
