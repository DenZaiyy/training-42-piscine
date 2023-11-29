void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    if (n < 10 && n > 0)
    {
        printf("%d", n);
    }
}