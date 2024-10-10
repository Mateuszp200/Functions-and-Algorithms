/**
 * @file MyFunction2.c 
 * @brief 
 *
 * 
 */
#include "MyFunctions2.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void print_used_elements(int* array, int size) {
    printf("{");

    //for loop to print used elements array
  
    int first_used_element = 1; 
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            if (!first_used_element) {
                printf(", ");
            }
            else {
                first_used_element = 0;
            }
            printf("%d", array[i]);
        }
    }

    printf("}\n");
}

void print_all_elements(int* array, int size) {
    printf("{");

    //for loop to print all elements
    for (int i = 0; i < size; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("}\n");
}

int find_min_element(int* array, int size) {
    //if and for loop to find minimum element of the array
    if (size <= 0) {
        return 0;
    }
    int min_element = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }
    return min_element;
}

int find_max_element(int* array, int size) {
    //if and for loop to find the maximum element of the array
    if (size <= 0) {
        return 0;
    }
    int max_element = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }
    return max_element;
}

double compute_average(int* array, int size) {
    //if and for loop to calculate the average of the array
    if (size <= 0) {
        return 0.0; 
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    double average = (double)sum / size;
    return average;
}

int compare_integers(const void* a, const void* b) {
    //this function compares two integers which you have put in for the parameters
    return (*(int*)a - *(int*)b);
}

double compute_median(int* array, int size) {
    //if and for loop to calculate the median of the array
    if (size <= 0) {
        return 0.0; 
    }

    int* copy = malloc(size * sizeof(int));//malloc() is a library function that allows C to allocate memory dynamically from the heap.
    if (copy == NULL) {
        return 0.0;
    }
    for (int i = 0; i < size; i++) {
        copy[i] = array[i];
    }
    //sorting of the array
    qsort(copy, size, sizeof(int), compare_integers);
    double median;
    if (size % 2 == 0) {
        int mid1 = copy[size / 2 - 1];
        int mid2 = copy[size / 2];
        median = (mid1 + mid2) / 2.0;
    }
    else {
        median = copy[size / 2];
    }
    free(copy);
    return median;
}

double compute_variance(int* array, int size) {
    //if and for loop to calculate the variance of the array
    if (size <= 0) {
        return 0.0;
    }
    //the formula
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    double avg = sum / size;
    double squared_diff_sum = 0.0;
    for (int i = 0; i < size; i++) {
        double diff = array[i] - avg;
        squared_diff_sum += diff * diff;
    }
    double variance = squared_diff_sum / size;
    return variance;
}

double compute_std_deviation(int* array, int size) {
    //if and for loop to calculate the standard deviation of the array
    if (size <= 0) {
        return 0.0; 
    }
    //the forumla
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    double avg = sum / size;
    double squared_diff_sum = 0.0;
    for (int i = 0; i < size; i++) {
        double diff = array[i] - avg;
        squared_diff_sum += diff * diff;
    }
    double variance = squared_diff_sum / size;
    double std_deviation = sqrt(variance);
    return std_deviation;
}

int countUsedElements(int* arr, int size) {
    //count the used elements in the array
    int count = 0;
    //for loop
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }
    return count;
}

int countUniqueElements(int* arr, int size) {
    //declaring the variables
    int count = 0;
    int uniqueCount = 0;
    int* isUnique = (int*)calloc(size, sizeof(int));
    //if and for loop to count the unique elements
    if (isUnique == NULL) {
        return -1;
    }
    for (int i = 0; i < size; i++) {
        int isCurrentElementUnique = 1; 
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j] && isUnique[j]) {
                isCurrentElementUnique = 0;
                break;
            }
        }
        if (isCurrentElementUnique) {
            isUnique[i] = 1; 
            uniqueCount++;
        }
    }
    free(isUnique);
    return uniqueCount;
}

void printFrequencyDistribution(int* arr, int size) {
    //if and for loop to print the frequency distribution of the array
    if (size <= 0 || arr == NULL) {
        return;  
    }
    int* isUnique = (int*)calloc(size, sizeof(int));
    if (isUnique == NULL) {
        return;
    }
    for (int i = 0; i < size; i++) {
        if (isUnique[i]) {
            continue; 
        }
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                isUnique[j] = 1;  
            }
        }
        printf("%d\t%d\n", arr[i], count);
    }
    free(isUnique);
}

void remove_values(int* array, int size, int* values_to_remove, int num_values_to_remove) {
    //this function is my own function for one of the main() codes we have to do, this is to remove the unused elements of the array
    for (int i = 0; i < num_values_to_remove; i++) {
        int value_to_remove = values_to_remove[i];
        for (int j = 0; j < size; j++) {
            if (array[j] == value_to_remove) {
                array[j] = 0; // Mark the value as "unused" (0 in this case)
            }
        }
    }
}