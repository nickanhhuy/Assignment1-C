#include <stdio.h>
#include "function.h"
#include <stdlib.h>
//Next question function
void next_question(char answer) {
    if (answer == 'y' || answer == 'Y')
        printf("Here is the next question: \n");
    else if (answer == 'n' || answer == 'N')
        exit(1);
}

//Q1
double base_power(double base, int power, double result) {
    //Case: The result always is 1 when the power is 0
    if (power == 0) {
        return result;
    }
    // Case: If the power is greater than 0 then it repeatedly implements the function until the result shows when the power reaches 0.
    // For ex: if the power is 2 and base is 2, the power is 2 and (result * base) will be 1 * 2 = 2.
    //         Again it repeats the function: Now the power is 1 and (result * base) is 2 * 2 = 4.
    //         Then it will show the result when the power reaches 0.
    else if (power > 0) {
        return base_power(base, power - 1, result * base);
    }
    //Case: If the power is less than 0 then it repeatedly implements the function until the result shows when the power reaches 0.
    // In this case for handling negative numbers, power should be +1 and result is result/base
    else {
        return base_power(base, power + 1, result / base);
    }
}

//Q2
// Function to check if an element exists in a set
int finding_elements_sets(int set[], int size, int element) {
    // Iterate through the set to check for the presence of the element
    for (int i = 0; i < size; i++) {
        // If the element is existed in the set it will return 1
        if (set[i] == element) {
            return 1;
        }
    }
    //Otherwise it returns 0 to the exit status
    return 0;
}

// Function to find the intersection of two sets (arrays)
int intersection_function(int set1[], int set2[], int size1, int size2, int found_elements[]) {
    int found = 0; // Counter for the number of common elements
    // Loop through each element in the first set
    for (int i = 0; i < size1; i++) {
        // Check if the current element of set1 exists in set2 and is not already counted
        if (finding_elements_sets(set2, size2, set1[i]) && !finding_elements_sets(set1, i, set1[i])) {
            found_elements[found++] = set1[i]; // Store the unique common element
        }
    }
    return found; // Return the count of unique common elements
}

//Function to display elements in a set
void list_sets(int set[], int size) {
    // Loop through each element in the set and print it
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
        //Print the current element
    }
    printf("\n");
}

//Q3
//Function to encrypt the message
void encrypt(const char* message, char* encrypted) {
    // Iterate through the message using pointer arithmetic
    while (*message != '\0') {
        // Check lowercase letters
        if (*message >= 'a' && *message <= 'z') {
            if (*message == 'z') {
                *encrypted = 'a';
            }
            else {
                *encrypted = *message + 1;
            }
        }
        // Check uppercase letters
        else if (*message >= 'A' && *message <= 'Z') {
            if (*message == 'A') {
                *encrypted = 'Z';
            }
            else {
                *encrypted = *message - 1;
            }
        }
        // Other characters cases
        else {
            *encrypted = *message;
        }
        // Move to the next characters in both strings
        message++;
        encrypted++;
    }
    *encrypted = '\0'; // Null-terminate the encrypted string
}
//Function to decrypt the message
void decrypt(const char* encryptedMessage, char* decryptedMessage) {
    // Iterate through the encrypted message using pointer arithmetic
    while (*encryptedMessage != '\0') {
        // Check lowercase letters cases
        if (*encryptedMessage >= 'a' && *encryptedMessage <= 'z') {
            if (*encryptedMessage == 'a') {
                *decryptedMessage = 'z'; // Wrap around from 'a' to 'z'
            } else {
                *decryptedMessage = *encryptedMessage - 1; // Shift to the previous letter
            }
        }
        // Check uppercase letters cases
        else if (*encryptedMessage >= 'A' && *encryptedMessage <= 'Z') {
            if (*encryptedMessage == 'Z') {
                *decryptedMessage = 'A'; // Wrap around from 'Z' to 'A'
            } else {
                *decryptedMessage = *encryptedMessage + 1; // Shift to the next letter
            }
        }
        // Leave other characters unchanged
        else {
            *decryptedMessage = *encryptedMessage;
        }
        // Move to the next characters in both strings
        encryptedMessage++;
        decryptedMessage++;
    }
    *decryptedMessage = '\0'; // Null-terminate the decrypted string
}


//Q4
// Function to compute average income for each city
double average_income_city(double incomes[4][3], int numcity, double average_income_city[]) {
    for (int city = 0; city < numcity; city++) {
        double total_incomes = 0;
        for (int census = 0; census < 3; census++) {  // Corrected loop condition
            total_incomes += incomes[city][census];
        }
        average_income_city[city] = total_incomes / 3;  // Average based on number of censuses
    }
    return 0;
}
// Function to compute average income in each census over all the cities
double average_income_census(double incomes[4][3], int numcity, double average_income_census[]) {
    for (int census = 0; census < 3; census++) {
        double total_incomes = 0;
        for (int city = 0; city < numcity; city++) {
            total_incomes += incomes[city][census];
        }
        average_income_census[census] = total_incomes / numcity;  // Average based on number of cities
    }
    return 0;
}
