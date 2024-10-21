#include <stdio.h>
#include "function.h"
#include <string.h>
int main(void)
{
/////////////////////////  QUESTION 1 ////////////////////////////
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

        // Next question
            char answer;
            printf("Continue to question 2 (y/n): ");
            scanf(" %c", &answer);
            next_question(answer);
        //

////////////////////////  QUESTION 2  ///////////////////////
        // Sample input sets
        int set1[] = {10, 25, 15, 3, 9, 12,};
        int set2[] = {15, 30, 12, 9, 20};
        // Sizes of sets
        int size1 = sizeof(set1) / sizeof(set1[0]);
        int size2 = sizeof(set2) / sizeof(set2[0]);
        int found_elements[10]; // Array to store the intersection elements
        //Print elements in set1
        printf("\tSet 1: ");
        //Call the function list_sets
        list_sets(set1,size1);
        //Print elements in set2
        printf("\tSet 2: ");
        list_sets(set2,size2);
        // Find the intersection of Set 1 and Set 2
        int intersection_number_counts = intersection_function(set1, set2, size1, size2, found_elements);
        // Print the intersection result in the main function
        //Using if-else statement to check are there any intersection or not
        if (intersection_number_counts > 0) {
            for (int i = 0; i < intersection_number_counts; i++) {
                printf("%d ", found_elements[i]);
            }
        } else {
            printf("No common elements.\n");
        }


        // Next question

        printf("Continue to question 3 (y/n): ");
        scanf(" %c", &answer);
        next_question(answer);

        //


//////////////////////// QUESTION 3 /////////////////////////////
    char message[50];
    char encryptedMessage[50];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    encrypt(message, encryptedMessage);
    printf("Encrypted message: %s\n ", encryptedMessage);
}


