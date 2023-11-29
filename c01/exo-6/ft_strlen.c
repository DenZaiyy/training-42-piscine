#include <stdio.h>
#include <unistd.h>

int ft_strlen (char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main()
{
    char str[] = "test";

    printf("%s", "La chaine de caractere as une longueur de : ");
    printf("%d", ft_strlen(str));

    return 0;
}