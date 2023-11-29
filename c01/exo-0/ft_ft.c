#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a = 45;
    int *nbr;
    nbr = &a;

    ft_ft(nbr);
    printf("%d", a);
}