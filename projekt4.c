#include <stdio.h>

int main() 
{
    double numbers[5];
    int counter = 0;
    printf("Write 5 numbers\n");

    for(int j = 0; j < 5; j++)
    {
        counter++;
        printf("Write %d. number: ", counter);
        scanf("%lf", &numbers[counter-1]);


    }

    printf("\nnapis cislo ktere chces zobrazit: ");
    scanf("%d", &counter);
    printf("\nVybrane cislo je: %0.2lf", numbers[counter-1]);

}