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

void sortArr(int arr[], int N) //Sorts the array by keeping three pointers l, r and i
{
    int l = 0, r = N-1;// Intialising l to 0 and r to last element of the array
    
    for(int i = 0; i < N && i <= r;)//loops over the unsorted elements in the array
    {
        switch (arr[i])//It is okay to use for loop
        {
            case 0://If arr[i] == 0
                swap(&arr[i++], &arr[l++]);//Swaps arr[i] with arr[l] and increments i and l by 1
                break;
            case 1: //If arr[i] == 1
                i++;//i is incremented by 1
                break;
            case 2://If arr[i] == 2
                swap(&arr[i], &arr[r--]);//Swaps arr[i] with arr[r] and r is decremented by 1
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