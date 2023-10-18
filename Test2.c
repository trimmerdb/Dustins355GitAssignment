#include <stdio.h>
#include <stdlib.h>
#include "Themiddle.h"

double calculateMean(int arr[], int size);
double calculateMedian(int arr[], int size);
int calculateMode(int arr[], int size);

int main(void){

    printf("Test 1:\n");
    int numbers[] = {5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double mean = calculateMean(numbers, size);
    printf("Mean: %.2lf\n", mean);

    double median = calculateMedian(numbers, size);
    printf("Median: %.2lf\n", median);

    int numbers1[] = {5, 6, 6, 7, 8, 8, 8, 9};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);

    int mode = calculateMode(numbers1, size1);
    printf("Mode: %d\n", mode);

    return 0;
}