#include "../include/libft.h"

int     ft_isprint(int c)
{
    if (c >= 32 && c <= 127)
        return (1);
    return (0);
}

/* int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (!ft_isprint(argv[1][i]))
            {
                printf("its not printable\n");
                return (0);
            }
            i++;
        }
        printf("all characters are printable\n");
    }
    else
        printf("missing argument\n");
    return (0);
} */
