#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a = 40;
    int b = 6;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("%d\n", div);
    printf("%d", mod);

    return 0;
}