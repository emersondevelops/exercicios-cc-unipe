#include <stdio.h>

int main()
{
    int numVogais = 0, letra, i;

    for(i = 0; letra != '\n'; i++)
    {
        letra = getc(stdin);
        
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || \
		letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            numVogais++;
        }
    }

    printf("%d", numVogais);

    return 0;
}