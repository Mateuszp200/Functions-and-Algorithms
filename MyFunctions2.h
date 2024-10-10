/**
 * @file doxygen
 * @brief 
 *
 * 
 */
#pragma once
#ifndef MyFunctions2_H
#define MyFunctions2_H

//Function 10
void print_used_elements(int* array, int size);

//Function 11
void print_all_elements(int* array, int size);

//Function 12
int find_min_element(int* array, int size);

//Function 13
int find_max_element(int* array, int size);

//Function 14
double compute_average(int* array, int size);

//Function 15
double compute_median(int* array, int size);

//Function 16
double compute_variance(int* array, int size);

//Function 17
double compute_std_deviation(int* array, int size);

//Function 18
int countUsedElements(int* arr, int size);

//Function 19
int countUniqueElements(int* arr, int size);

//Function 20
void printFrequencyDistribution(int* arr, int size);

//This function is my own function for one of the main() function codes.
void remove_values(int* array, int size, int* values_to_remove, int num_values_to_remove);

#endif