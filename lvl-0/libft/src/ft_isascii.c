#include "../include/libft.h"

int     ft_isascii(int c)
{
    if (c >= 0 && c < 128)
        return (1);
    else
        return (0);
}

/* int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (!ft_isascii(argv[1][i]))
            {
                printf("its not ascii characters\n");
                return (0);
            }
            i++;
        }
        printf("all characters are ascii\n");
    }
    else
        printf("missing argument\n");
    return (0);
} */
