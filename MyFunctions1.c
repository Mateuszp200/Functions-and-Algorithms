/**
 * @file doxygen
 * @brief 
 *
 * 
 */
#include "MyFunctions1.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int generate_random_integer(int lower_limit, int upper_limit) {
    // creating an if loop
    if (upper_limit < lower_limit) {
        int temp = lower_limit;
        lower_limit = upper_limit;
        upper_limit = temp;
    }
    //random integer generator
    srand((unsigned)time(NULL));
    int range = upper_limit - lower_limit + 1;
    int random_num = (rand() % range) + lower_limit;
    //returning answer
    return random_num;
}


unsigned int generate_random_positive_integer() {

    //generating a random positive integer
    srand((unsigned)time(NULL));

    //setting the variable
    int random_num = rand();

    unsigned int positive_random = (unsigned int)random_num;

    //returning answer
    return positive_random;
}


void fill_array_with_zeros(int* array, int size) {
    //creating a for loop with 2 parameters
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

void fill_array_with_value(int* array, int size, int n) {
    //creating a for loop with 2 paramaters
    for (int i = 0; i < size; i++) {
        array[i] = n;
    }
}

void fill_array_with_random_values(int* array, int size, int lower_limit, int upper_limit) {
    //creating an if loop with 4 parameters
    if (upper_limit < lower_limit) {
        int temp = lower_limit;
        lower_limit = upper_limit;
        upper_limit = temp;
    }
    //generating random values
    srand((unsigned)time(NULL));

    //creating another for loop to fill the array
    for (int i = 0; i < size; i++) {
        int random_num = (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
        array[i] = random_num;
    }
}

void clear_array(int* array, int size) {
    //for loop to clear an array with 2 parametersset
    for (int i = 0; i < size; i++) {
        array[i] = 0; 
    }
}

void defragment_array(int* array, int size) {
    //declaring 2 variables
    int usedIndex = 0;
    int freeIndex = size - 1;

    //creating a while if loop which will allow for defragmenting the array with 2 parameters put in
    while (usedIndex < freeIndex) {
        while (usedIndex < size && array[usedIndex] != 0) {
            usedIndex++;
        }
        while (freeIndex >= 0 && array[freeIndex] == 0) {
            freeIndex--;
        }

        if (usedIndex < freeIndex) {
            int temp = array[usedIndex];
            array[usedIndex] = array[freeIndex];
            array[freeIndex] = temp;

            usedIndex++;
            freeIndex--;
        }
    }
}

void bubble_sort(int* array, int size) {
    //loop to create a bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void randomize_array(int* array, int size) {
    //generating random number
    srand((unsigned)time(NULL));

    //for loop to randomize the array
    for (int i = size - 1; i > 0; i--) {
        int random_index = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[random_index];
        array[random_index] = temp;
    }
}