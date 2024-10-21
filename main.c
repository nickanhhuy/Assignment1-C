#include <stdio.h>
#include "function.h"

int main(void)
{
    //QUESTION 1
        //Declare data type of base and power
        double base;
        int power;
        //Enter the base
        printf("Enter the base: ");
        scanf("%lf", &base);
        //Enter the power
        printf("Enter the power: ");
        scanf("%d", &power);

        //Call the function to do the calculation with the result is 1.
        double result = base_power(base, power, 1.0);
        //Print the result of the calculation based on the input.
        printf("The result of %lf power %d: %lf\n",base,power,result);
        //Exit status
        return 0;
}

