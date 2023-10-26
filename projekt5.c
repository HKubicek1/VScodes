#include <stdio.h>

void sorting(int pocetcisel, int pole[pocetcisel])
{
    int temp = 0;

    for(int j = 0; j < pocetcisel; j++)
    {
        for(int i = 0; i < pocetcisel; i++)
        {
        if(pole[i] > pole[i+1])
            {
            temp = pole[i+1];
            pole[i+1] = pole[i];
            pole[i] = temp;
            }
        }
    }
}

int main() 
{
    int pocetcisel = 0;
    int pole[pocetcisel];

    printf("napis kolik cisel chces porovnavat: ");
    scanf("%d", &pocetcisel);


    for(int i = 0; i < pocetcisel; i++)
    {
        printf("cislo %d: ", i+1);
        scanf("%d", &pole[i]);
    }

    sorting(pocetcisel, pole);
    
    printf("\nZde jsou srovnana cisla: ");

    for(int i = 0; i < pocetcisel; i++)
    {
        printf("%d ", pole[i]);
    }
}