/* this is guessing game : In This generate random number between 0 - 20 and user guess to that number
  if enter number is matching with random number you will win 
  if enter number is too high or too low print it's too high or it's too low
  user have 5 chance to guess the correct number */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, number, guess_number;

    guess_number = rand() % 20;
    printf("This is a guessing game\n");
    printf("i have choosen a number between 0 to 20 which you must guess\n");

    do {
        printf("\n\nYou have %d tries left!\n", (5 - count));
        printf("Enter a guess: ");
        scanf("%d", &number);
        if (number < guess_number)
        {
            printf("Sorry! %d it's lower number\n", number);
        }
        else if (number > guess_number)
        {
            printf("Sorry! %d it's greater number\n", number);
        }
        else
        {
            printf("Congratulation you guess it!\n");
            break;
        }
        count++;
    }while(count != 5);
return 0;

}

/* Output

This is a guessing game
i have choosen a number between 0 to 20 which you must guess


You have 5 tries left!
Enter a guess: 12
Sorry! 12 it's greater number


You have 4 tries left!
Enter a guess: 1
Sorry! 1 it's lower number


You have 3 tries left!
Enter a guess: 2
Sorry! 2 it's lower number


You have 2 tries left!
Enter a guess: 4
Sorry! 4 it's greater number


You have 1 tries left!
Enter a guess: 3
Congratulation you guess it!  */

