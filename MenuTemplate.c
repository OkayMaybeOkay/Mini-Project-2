#include <stdio.h>
#include <stdbool.h>

int main(void) {

    char userInput;

    do {


        printf("Welcome to the Driving Log! Here are your menu options:\n\n");
        printf("a) Record Trips\n");
        printf("b) Record Fuel Cost\n");
        printf("c) Answer Reminder Questions\n");
        printf("d) Print an Analysis Report of your Answers\n");
        printf("e) Exit\n\n");
        printf("***Note: You must do parts a, b, and c before you do part d.*** \n\n");

        printf("What option would you like?\n");
        printf("(Use a, b, c, d, e, or A, B, C, D, E): ");
        scanf(" %c", &userInput);
        printf("\n");

        while (userInput != 'a' && userInput != 'A' && userInput != 'b' && userInput != 'B' &&
               userInput != 'c' && userInput != 'C' && userInput != 'd' && userInput != 'D' &&
               userInput != 'e' && userInput != 'E') {

            printf("Wrong input, try again.\n\n");
            printf("What option would you like?\n");
            printf("(Use a, b, c, d, e, or A, B, C, D, E): ");
            scanf(" %c", &userInput);
            printf("\n");

        }

        switch(userInput) {

            case 'a':
            case 'A':
                printf("A is your option");
                break;
            
            case 'b':
            case 'B':
                printf("B is your option");
                break;

            case 'c':
            case 'C':
                printf("C is your option");
                break;

            case 'd':
            case 'D':
                printf("D is your option");
                break;

            case 'e':
            case 'E':
                printf("Thank you for coming!\nWe hope to see you again soon :]");
                userInput = 'N';
                break;

        }

    } while (userInput == 'Y' || userInput == 'y');

    return 0;
}
