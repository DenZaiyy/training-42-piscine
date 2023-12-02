#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;
    int half;

    i = 0;
    temp = 0;
    half = size / 2;

    while (half-- > 0)
    {
        temp = tab[i];
        tab[i++] = tab[size - 1];
        tab[size-- - 1] = temp;
    }
}

void ft_print_tab(int *tab, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", tab[i]);

    printf("\n");
}

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_print_tab(tab, 10);
    ft_rev_int_tab(tab, 10);
    ft_print_tab(tab, 10);
    return 0;
}