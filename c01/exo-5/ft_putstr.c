#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "test";

    ft_putstr(str);

    return 0;
}