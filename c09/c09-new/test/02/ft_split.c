#include <stdlib.h>
#include <stdio.h>

int lenght(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char *copy(char *str, int pos)
{
    char *tab;
    int i = 0;

    tab = malloc(sizeof(char*) * (pos + 1));
    if (!tab)
        return (0);
    while(i < pos)
    {
        tab[i] = str[pos + i];
        i++;
    }
    tab[i] = '\0';
    return tab;
}

char **ft_split(char *str, char *charset)
{
    char **split;
    int i;
    int i2;
    int j;
    int index = 0;

    //if(!str || !charset)
     //   return 0;
    split = malloc(sizeof(char *) * (lenght(str) + 1));
    if(!split)
        return 0;
    i = 0;
    j = 0;
    while(str[i])
    {
        i2 = 0;
        while(charset[i2])
        {
            if(str[i] == charset[i2] || str[i] == '\0')
            {
                split[j] = copy(str, i);
                j++;
            }
            i2++;
        }
        i++;
    }
    split[j] = 0;
    return split;
}
/*
int main(int argc, char **argv)
{
    int i;
    char **a;

    i = 0;
    a = ft_split(argv[1], argv[2]);
    while (a[i])
    {
        printf("the str:%s\n", a[i]);
        i++;
    }
}*/