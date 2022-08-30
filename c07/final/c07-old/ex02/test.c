#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max)
{
    int    n;
    int    i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    n = max - min;
    *range = malloc(sizeof(int)* n);
    if (!*range)
        return (-1);
    i = 0;
    while (i < n)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (n);
}

#include <stdio.h>
int main(void)
{
    int i = 0;
    int *range;
    printf("%d", ft_ultimate_range(&range,1, 10));
    while (i < 20)
    {
        printf("%d ", range[i++]);
    }
    printf("\n");
}
