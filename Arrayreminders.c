#include <stdio.h>
int main(void)
{
  
    const char* Checklist[3]={"Did you fill the tires with Air? y/n: ", "Did you change the oil? y/n: ", "Do you have a full tank of gas? y/n: "};
    char input[3];
    for (int i=0; i<3; i++)
    {
        printf("%s", Checklist[i]);
        scanf(" %c", &input[i]);

        if (input[i]=='n' || input[i]=='N')
        {
            printf("You should fix this before you start your roadtrip\n"); 
        }
        else if (input[i]=='y' || input [i]=='Y')
        {
            printf("Thats one thing off the checklist!\n");
        }
        else
        {
            printf("Invalid entry please only answer with 'y' or 'n'\n");
            --i;
        }
    }
    printf("You have gone through everything on the checklist!\n");
return 0;
}