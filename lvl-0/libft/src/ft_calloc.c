#include "../include/libft.h"

void     *ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    size_t  total;
    unsigned char *ptr;

    // overflow check
    if (nmemb != 0 && size > SIZE_MAX / nmemb)
        return (NULL);
    // memory calculation
    total = nmemb * size;
    // allocation
    ptr = (unsigned char*)malloc(total);
    if (!ptr)
        return (NULL);
    // set memory allocation to 0
    i = 0;
    while (i < total)
    {
        ptr[i] = 0;
        i++;
    }
    return (void *)ptr;
}

/* int main(void)
{
    size_t nbr = 10;
    size_t size = 10;
    size_t i;

    int *arr = ft_calloc(nbr, size);

    if (!arr)
    {
        printf("allocation failed\n");
        return 1;
    }

    // verify memory is zeroed
    i = 0;
    while (i < nbr)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
} */
