#include <stdio.h>

void printArray(int arr[], int N)//Prints the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    
}

void swap(int * x, int * y) //swaps x and y using a temporary variable
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArr(int arr[], int N) //Sorts the array by keeping three pointers low, ptr and high.
{
    int low = 0, ptr = 0, high = N -1; //Initialising low and ptr to 0 and high to the last element of the array.

    while (ptr <= high) //loops over the unsorted region
    {
        switch(arr[ptr]) //You can use the if statement
        {
            case 0: //If arr[ptr] = 0
                swap(&arr[ptr++], &arr[low++]); //swaps arr[ptr] and arr[low], then increments ptr and low by 1
                break;
            case 1: //If arr[ptr] = 1
                ptr++; // Increments ptr by 1.
                break;
            case 2://If arr[ptr] = 2
                swap(&arr[ptr], &arr[high--]); //swaps arr[ptr] and arr[high], then decrements high by 1
                break;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2}; //Declaring an array to work with
    int N = sizeof(arr) / sizeof(arr[0]); //Size of the array

    printArray(arr, N); //Printing the array before sorting
    sortArr(arr, N); //Sort the array
    printArray(arr, N); //Printing the array after sorting

    return 0;
}

//The time complexity is O(N).
// :)