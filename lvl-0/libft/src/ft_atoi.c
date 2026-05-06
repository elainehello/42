#include "../include/libft.h"

int     ft_atoi(const char *nptr)
{
    int i;
    int res;
    int sign;

    // skip whitespaces
    i = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    // sign assigment, check one time
    sign = 1;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    // its digit
    res = 0;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        res = res * 10 + (nptr[i] - '0');
        i++;
    }
    return (res * sign);
}

/* int main(void)
{
    int i = 0;
    char *val = "     -12345bd";
    int res;

    printf("%d", res = ft_atoi(val));
    return (0);
} */
