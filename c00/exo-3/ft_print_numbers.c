#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    int i = 0;

    while (i <= 9)
    {
        ft_putchar(i + 48);
        // 48 dans la table ascii est égale à 0
        i++;
    }
}