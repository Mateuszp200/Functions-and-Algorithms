/**
 * @file doxygen
 * @brief 
 *
 *
 */
#include "MyFunctions2.h"
#include "MyFunctions1.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//Defining Symbolic variables
#define MYSIZE1 10
#define MYSIZE2 50
#define MIN1 0
#define MAX1 10
#define MIN2 100
#define MAX2 120

//The main function
int main() {
    //Declaring the variables
    int data1[MYSIZE1];
    int data2[MYSIZE2];

    //Function 1 = CLearing the array and printing the array
    printf("Array data1 after clearing:\n");
    clear_array(data1, MYSIZE1);
    print_all_elements(data1, MYSIZE1);

    //Function 2 = Filling data1 with random values in range of MIN1 to MAX1
    printf("Array data1 after filling with random values:\n");
    srand((unsigned)time(NULL)); // Seed the random number generator
    fill_array_with_random_values(data1, MYSIZE1, MIN1, MAX1);
    print_all_elements(data1, MYSIZE1);

    //Function 3 = Sorting data1 and printing it
    printf("Array data1 after sorting:\n");
    bubble_sort(data1, MYSIZE1); // Sort the array using bubble sort
    print_all_elements(data1, MYSIZE1);

    //Function 4 = Randomizing data1
    printf("Array data1 after randomization:\n");
    randomize_array(data1, MYSIZE1);
    print_all_elements(data1, MYSIZE1);

    //Function 5 = Filling data1 with values, then removing certain values
    //for this function i had to create my own function to remove the certain values
    int values_to_remove[] = { 1, 4, 5, 9 };
    int num_values_to_remove = sizeof(values_to_remove) / sizeof(values_to_remove[0]);
    remove_values(data1, MYSIZE1, values_to_remove, num_values_to_remove);
    printf("Array data1 after removing values:\n");
    print_all_elements(data1, MYSIZE1);
    int used_count = countUsedElements(data1, MYSIZE1);
    printf("Number of used elements in data1: %d\n", used_count);

    //Function 6 = Defragment the arrag
    defragment_array(data1, MYSIZE1);
    printf("Array data1 after defragmentation:\n");
    print_all_elements(data1, MYSIZE1);

    //Function 7 = Obtain minimum, maximum, average and median of data1
    int min = find_min_element(data1, MYSIZE1);
    int max = find_max_element(data1, MYSIZE1);
    double avg = compute_average(data1, MYSIZE1);
    double median = compute_median(data1, MYSIZE1);
    printf("Minimum value in data1: %d\n", min);
    printf("Maximum value in data1: %d\n", max);
    printf("Average value in data1: %.2lf\n", avg);
    printf("Median value in data1: %.2lf\n", median);

    //Function 8 = Obtain variance and std_deviation
    double variance = compute_variance(data1, MYSIZE1);
    double std_deviation = compute_std_deviation(data1, MYSIZE1);
    printf("Variance of data1: %.2lf\n", variance);
    printf("Standard Deviation of data1: %.2lf\n", std_deviation);

    //Function 9 = Create data2 with MYSIZE2 elements and fill with values. 
    printf("Array data2 after filling with values:\n");
    int values_data2[MYSIZE2] = { 3, 1, 2, 3, 4, 3, 2, 2, 3, 4 };
    for (int i = 0; i < MYSIZE2; i++) {
        data2[i] = values_data2[i];
    }
    print_all_elements(data2, MYSIZE2);
    int used_count_data2 = countUsedElements(data2, MYSIZE2);
    int unique_count_data2 = countUsedElements(data2, MYSIZE2);
    printf("Number of used elements in data2: %d\n", used_count_data2);
    printf("Number of unique used elements in data2: %d\n", unique_count_data2);

    //Function 10 = Obtain the number of used elements
    printf("Frequency distribution of data2:\n");
    printFrequencyDistribution(data2, MYSIZE2);

    //Function 11 = Fill data2 with MYSIZE2 random values between MIN2 and MAX2
    fill_array_with_random_values(data2, MYSIZE2, MIN2, MAX2);
    printf("Array data2 after filling with random values:\n");
    print_all_elements(data2, MYSIZE2);

    //Function 12 = Obtain minimum, maximum, average and median values of data2
    int min2 = find_min_element(data2, MYSIZE2);
    int max2 = find_max_element(data2, MYSIZE2);
    double avg2 = compute_average(data2, MYSIZE2);
    double median2 = compute_median(data2, MYSIZE2);
    printf("Minimum value in data2: %d\n", min);
    printf("Maximum value in data2: %d\n", max);
    printf("Average value in data2: %.2lf\n", avg);
    printf("Median value in data2: %.2lf\n", median);

    //Function 13 = Obtain variance and std deviation of data2
    variance = compute_variance(data2, MYSIZE2);
    std_deviation = compute_std_deviation(data2, MYSIZE2);
    printf("Variance of data2: %.2lf\n", variance);
    printf("Standard Deviation of data2: %.2lf\n", std_deviation);

    //Function 14 = Obtain the used elements of data2
    used_count_data2 = countUsedElements(data2, MYSIZE2);
    unique_count_data2 = countUsedElements(data2, MYSIZE2);
    printf("Number of used elements in data2: %d\n", used_count_data2);
    printf("Number of unique used elements in data2: %d\n", unique_count_data2);

    //Function 15 = Sort data2
    printf("Array data2 after sorting:\n");
    bubble_sort(data2, MYSIZE2);
    print_all_elements(data2, MYSIZE2);

    return 0;
}