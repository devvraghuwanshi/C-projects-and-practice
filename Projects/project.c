/*We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //header which shows time;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random Number (1-100): %d\n", randomNumber);

    do
    {
        printf("guess the number:\n");
        scanf("%d", &guessed);
       if(guessed>randomNumber){
         printf("lower number please!\n");

       }else if (randomNumber>guessed){
        printf("higher number please!\n");
       }
       else{
        printf("congrats!\n");
       }


        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("you guessed the no. in %d guesses\n", no_of_guesses);

    return 0;
}
