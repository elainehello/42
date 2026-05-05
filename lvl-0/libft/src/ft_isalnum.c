#include "../include/libft.h"

int     ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') ||
        (c >= '0' && c <= '9'))
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
            if (!ft_isalnum(argv[1][i]))
            {
                printf("not alphanumeric\n");
                return (0);
            }
            i++;
        }
        printf("all characters are alphanumeric\n");
    }
    else
        printf("missing argument\n");
    return (0);
} */
