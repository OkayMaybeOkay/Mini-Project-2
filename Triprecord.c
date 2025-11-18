#include <stdio.h>
double difference(double after, double before)
{
    double milesdriven;
    milesdriven = after - before;
    return milesdriven;
}
int main (void)
{
    double milesdone;
    double average_miles;
    int Amttrips;
    double odometer;
    double aftodo;
    int sumMiles = 0;
    printf("How many trips are you taking?: ");
    scanf("%d", &Amttrips);
    while( Amttrips<0)
    {
        printf("invalid, please enter positive value: \n");
        scanf("%d", &Amttrips);

    }
    for (int i=0; i<Amttrips; i++)
    {
    printf("trip %d: how many miles did your odometer have before you started your trip?: \n", i+1);
    
    scanf("%lf", &odometer);
    if( odometer<0)
    {
        printf("invalid, please enter positive value: \n");
        scanf("%d", &odometer);

    }
    printf("How many miles did your odometer have after your trip?: ");
    scanf("%lf", &aftodo);
    if( aftodo<odometer)
    {
        printf("invalid, please enter positive value: \n");
        scanf("%d", &aftodo);

    }
 milesdone = difference(odometer, Amttrips);
 sumMiles+= milesdone;
    }
    

   
   
 printf("If the amount of trips taken were %d and you had %.2lf miles on your odometer to begin with\n", Amttrips, odometer);
 printf(" The total amount of miles %d you have driven on all your trips is %.2lf\n", sumMiles);

    return 0;
}