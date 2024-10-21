//
// Created by Huy on 10/20/2024.
//

#ifndef FUNCTION_H
#define FUNCTION_H
void next_question(char answer);
//Q1
double base_power(double base, int power, double result);

//Q2
int finding_elements_sets(int set[], int size, int element);
int intersection_function(int set1[], int set2[], int size1, int size2, int found_elements[]);
void list_sets(int set[], int size);

//Q3
void encrypt(const char* message, char* encrypted);
void decrypt(const char* encryptedMessage, char* decrypted);

//Q4
double average_income_city(double incomes[4][3], int numcity, double average_income_city[]);
double average_income_census(double incomes[4][3], int numcity, double average_income_census[]);
int finding_index(char cities[4][20], char entered_city[20]);
int specific_city_average_income(int index, char cities[4][20], double average_income_city[]);
#endif //FUNCTION_H
