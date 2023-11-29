#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    int i = 97;

    while (i <= 122)
    {
        ft_putchar(i);
        i++;
    }

    // ft_putchar('\n');
}

int main()
{
    ft_print_alphabet();
}