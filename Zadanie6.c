#include <stdio.h>
#include <ctype.h>

int pobierz_pierwszy();//pobiera pierwszy znak drukowany

int main()
{
    printf("Podaj znak: \n");
    char pom = pobierz_pierwszy();
    printf("%c\n",pom);
}

int pobierz_pierwszy()
{
    char a = getchar();
    while(!isalpha(a))
    {
        a = getchar();
    }
    return a;
}
