#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 13;
    int b = 37;
    int *nbr;
    int *nbr2;
    nbr = &a;
    nbr2 = &b;

    ft_swap(nbr, nbr2);

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}