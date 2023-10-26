#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("napis svuj odhad: ");
        scanf("%d", &guess);

        if(guess == answer){
            printf("\nano! cislo je %d! ", answer);
            
        }

        else if(guess < answer){
            printf("pridej...");
        }

        else if(guess > answer){
            printf("uber...");
        }

        else{
            printf("nezadal si cele cislo, zkus to znovu!");
        }
        guesses++;

    }while(guess != answer);
    
    printf("pocet pokusu: %d", guesses);
}