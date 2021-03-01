#include <stdio.h>
#include <ctype.h>
//program zlicza znaki az do wystapienia konca pliku

int main()
{
    int licznik = 0;
    int licznik_liter = 0;
    char pom = getchar();
    
    while(pom != EOF)
    {
        if (isalpha(pom))
        {
            licznik_liter++;
        }
        licznik++;
        pom = getchar();
    }
    printf("\nW tekscie bylo %d znakow i %d liter\n",licznik,licznik_liter);
}
