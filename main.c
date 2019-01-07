#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void InsertionSort(int array[], int size){
    for (int i = 0; i < size; i++) {
        for (int j = i; j >= 0; j--) {
            if(j + 1 < size) {
                if (array[j] > array[j + 1])
                    swap(&array[j], &array[j + 1]);
                if (array[j] > array[j - 1])
                    break;
            }
        }
    }
    printArray(array, size);
}


int main(int argc, char *argV[]) {
    int size = argc - 2;
    int i;
    int array[size];

    if(argc < 2){
        printf("Arguments should be: ./main [array size] [list of elements]\n");
        exit(0);
    }
    if(atoi(argV[1]) != (argc - 2)){
        printf("The list of elements does not match the size you entered.\n");
        exit(0);
    }

    for(i = 0; i < size; i++)
        array[i] = atoi(argV[i + 2]);

    InsertionSort(array, size);
    printf("%d\n", argc);
    return 0;
}