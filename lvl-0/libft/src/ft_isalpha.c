#include "../include/libft.h"

int     ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

/* int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i]) // reach the end of the string
        {
            if (!ft_isalpha(argv[1][i]))
            {
                printf("not alphabet\n");
                return (0);
            }
            i++;
        }
        printf("all character alphabetics\n");
    }
    else
        printf("missing arguments\n");
    return (0);
} */
