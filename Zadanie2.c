#include <stdio.h>
#include <ctype.h>
//program odczytuje dane wejsciowe az do momentu napotkania konca pliku i wyswietla kazdy znak wraz z jego kodem w ASCII

int main()
{
    int licznik = 0;
    char pom = getchar();
    while (pom != EOF)
    {
        if (licznik == 10)//zeby bylo maks 10 pakietow znak i kod w jednej lini
        {
            putchar('\n');
            printf("%c -> %d ",pom,pom);
            pom = getchar();
            licznik = 1;
            continue;
        }
        if (pom == '\n')
        {
            putchar('\n');
            licznik = 0;
            pom = getchar();
            continue;
        }
        
        if (pom == 32)
        {
            printf("Spacja -> %d ",pom);
            pom = getchar();
            licznik++;
            continue;
        }
        
        if (pom < 32)
        {
            printf("%c -> %d ",pom + 64,pom);
            pom = getchar();
            continue;
        }
        printf("%c -> %d ",pom,pom);
        licznik++;
        pom = getchar();
    }
}
