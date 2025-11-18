#include <stdio.h>
#include <stdbool.h>

double difference(double odoAfter, double odoBefore) {
    double milesDriven;
    milesDriven = odoAfter - odoBefore;
    return milesDriven;
}

double fuel_pur(double totalMiles, double gasCost) {
    double totalCost;
    totalCost = totalMiles * gasCost;
    return totalCost;
}

int main(void) {

    char userInput;
    int tripAmount = 0;
    int setOdo = 0;
    int i;
    int startOdo;
    int afterOdo;
    int mileSum = 0;

    bool didTrip = false;
    bool didFuel = false;
    bool didReminder = false;
    bool didExit = false;

    do {

        printf("Welcome to the Driving Log! Here are your menu options:\n");
        printf("a) Record Trips (Up to 100 trips!) \n");
        printf("b) Record Fuel Cost\n");
        printf("c) Answer Reminder Questions\n");
        printf("d) Print an Analysis Report of your Answers\n");
        printf("e) Exit / Restart\n\n");
        printf("Note: You must do all parts (except for e) to do part d. \n\n");

        printf("What option would you like?\n");
        printf("(Use a, b, c, d, e, or A, B, C, D, E): ");
        scanf(" %c", &userInput);
        printf("\n");

        if (didTrip && didFuel && didReminder) {

            while (userInput != 'a' && userInput != 'A' && userInput != 'b' && userInput != 'B' &&
                   userInput != 'c' && userInput != 'C' && userInput != 'd' && userInput != 'D' &&
                   userInput != 'e' && userInput != 'E') {
                
                printf("Invalid input, try again.\n\n");
                printf("What option would you like?\n");
                printf("(Use a, b, c, d, e, or A, B, C, D, E): ");
                scanf(" %c", &userInput);
                printf("\n");

            }

        } else {

            while (userInput != 'a' && userInput != 'A' && userInput != 'b' && userInput != 'B' &&
                   userInput != 'c' && userInput != 'C' && userInput != 'e' && userInput != 'E') {
                
                if (userInput == 'd' || userInput == 'd') {

                    printf("Reminder: If you haven't done parts a - c, you can't access part d!\n\n");

                }

                printf("Invalid input, try again.\n\n");
                printf("What option would you like?\n");
                printf("(Use a, b, c, e, or A, B, C, E): ");
                scanf(" %c", &userInput);
                printf("\n");

            }

        }

        int tripAmount = 0;
        int setOdo = 0;
        int i;
        int startOdo;
        int afterOdo;
        int mileSum = 0;
        double gasCost;

        switch(userInput) {

            case 'a':
            case 'A': {

                tripAmount = 0;
                setOdo = 0;
                mileSum = 0;

                printf("A is your option\n\n");

                printf("How many trips are you taking?: ");
                scanf("%d", &tripAmount);

                while (tripAmount <= 0 || tripAmount > 100) {
                    printf("\nInvalid input, please input a number in the range of 1 - 100. \n\n");
                    printf("How many trips are you taking?: ");
                    scanf("%d", &tripAmount);
                    printf("\n");
                }

                for (i = 0; i < tripAmount; i++) {

                    printf("\nFor Trip #%d: \n", i + 1);
                    printf("How many miles did your odometer have BEFORE you started your trip: ");
                    scanf("%d", &startOdo);
                    printf("\n");

                    while (startOdo <= setOdo) {

                        printf("Invalid input, please enter a value greater than 0 and your last odometer entry.\n\n");
                        printf("For Trip #%d:\n", i + 1);
                        printf("How many miles did your odometer have BEFORE you started your trip: ");
                        scanf("%d", &startOdo);
                        printf("\n");

                    }

                    setOdo = startOdo;

                    printf("For Trip #%d:\n", i + 1);
                    printf("How many miles did your odometer have AFTER your trip?: ");
                    scanf("%d", &afterOdo);
                    
                    while (afterOdo <= startOdo) {

                        printf("Invalid input, please enter a value greater than your starting odometer entry.\n\n");
                        printf("For Trip #%d:\n", i + 1);
                        printf("How many miles did your odometer have AFTER you started your trip: ");
                        scanf("%d", &afterOdo);
                        printf("\n");

                    }
                    
                    mileSum += difference(afterOdo, startOdo);

                }

                printf("Total Miles Traveled: %d\n\n", mileSum);

                didTrip = true;

                break;
            }
            
            case 'b':
            case 'B': {

                printf("\nEnter the cost of fuel at the gas station you are fueling at: ");
                scanf("%lf", &gasCost);
                printf("\n");
                
                didFuel = true;

                break;
            }

            case 'c':
            case 'C': {

                printf("\n");

                const char* Checklist[3]={"Did you fill the tires with Air?",
                                          "Did you change the oil?",
                                          "Do you have a full tank of gas?"};

                char input[3];

                for (int i=0; i<3; i++) {

                    printf("%s", Checklist[i]);
                    printf("\n(Use y, n, Y, n): ");
                    scanf(" %c", &input[i]);
                    printf("\n");

                    while (input[i] != 'n' && input[i] != 'N' &&
                           input[i] != 'y' && input[i] != 'Y') {

                        printf("Invalid input, please try again\n\n");

                        printf("%s", Checklist[i]);
                        printf("\n(Use y, n, Y, n): ");
                        scanf(" %c", &input[i]);
                        printf("\n");

                    }
                
                }


                didReminder = true;

                break;
                
            }

            case 'd':
            case 'D': {

                printf("D works!\n");
                break;
            
            }

            case 'e':
            case 'E': {

                didExit = true;

                break;
            }

        }


        if (didExit) {

            printf("Thanks for joining us, hope you found our program useful!");
            userInput = 'n';

        } else {

            printf("Would you like to keep going with the program?\n");
            printf("(Use y, n or Y, N): ");
            scanf(" %c", &userInput);

            while (userInput != 'y' && userInput != 'Y' &&
                   userInput != 'n' && userInput != 'N') {
        
                printf("Invalid input, try again.\n\n");
                printf("Would you like to keep going with the program?\n");
                printf("(Use y, n, Y, N): ");
                scanf(" %c", &userInput);
                printf("\n");
        
            }

        }
        
          
    } while (userInput == 'Y' || userInput == 'y');

    return 0;
}
