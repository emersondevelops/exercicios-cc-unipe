#include <stdio.h>

int main()
{
    char texto1[50], texto2[50];
    int i, letra;

    for (i = 0; letra != '\n'; i++)
    {
        letra = getc(stdin);
        texto1[i] = letra;
    }
    
    
    for(i = 0; texto1[i] != '\n'; i++)
    {
        texto2[i] = texto1[i];
    }

    printf(texto2);
    
    return 0;
}