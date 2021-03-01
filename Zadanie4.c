#include <stdio.h>
#include <ctype.h>
//program oblicza srednia liczbe liter w slowie

int main()
{
    float ile_liter = 0;
    float ile_slow = 0;
    float wynik;
    char pom = getchar();
    
    while (pom != EOF)
    {
        if(isalpha(pom))
            ile_liter++;
        if(isspace(pom))
            ile_slow++;
        pom = getchar();
    }
    wynik = (ile_liter)/(ile_slow);
    printf("Liczba liter to %.0f, a liczba slow to %.0f\n",ile_liter,ile_slow);
    printf("A zatem srednia dlugosc slowa w tekscie to %.2f\n",wynik);
    
}
