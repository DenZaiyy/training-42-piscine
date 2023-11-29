#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a / *b;
    *a = temp;
    *b = temp % *b;
}

int main()
{
    int nbr = 10;
    int nbr2 = 2;

    ft_ultimate_div_mod(&nbr, &nbr2);

    printf("%d\n", nbr);
    printf("%d", nbr2);

    return 0;
}