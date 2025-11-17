#include <stdio.h>
double fuel_pur(double Num1, double Num2)
{
 double gas;
    gas = Num1 * Num2;
    return gas;
}

int main (void)
{   
  int miles;
  double gascost;
  double Cost;
  printf("Enter how many miles your trip will be: \n");
  scanf("%d", &miles);

  printf("Enter the cost of fuel at the gas station you are fueling at: \n");
  scanf(" %lf", &gascost);
  
  Cost = fuel_pur (miles, gascost);

  printf("The total for traveling %d miles with fuel costing %.2lf will be: $%.2lf \n", miles, gascost, Cost);
  return 0;
}  