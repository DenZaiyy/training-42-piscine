#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char a = 'a';
    ft_putchar(a);
}
