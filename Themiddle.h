#include <stdio.h>
#include <stdlib.h>

double calculateMean(int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }
    
    double sum = 0.0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double calculateMedian(int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }

    qsort(arr, size, sizeof(int), compare);

    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}


int calculateMode(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int mode = arr[0];
    int maxCount = 1;

    for (int i = 0; i < size; i++) {
        int count = 1;
        
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    
    return mode;
}



