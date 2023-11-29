void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

// void ft_putnbr(int nb)
// {
//     if (nb >= 10)
//     {
//         ft_putnbr(nb / 10);
//         nb %= 10; // nb = nb % 10;
//     }
//     ft_putchar(nb + 48); // 48 est égale à 0 sur la table ASCII, donc de 0 à 9, on additionne
// }