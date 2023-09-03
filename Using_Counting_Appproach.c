#include <stdio.h>

void printArray(int arr[], int N)//Prints the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    
}

void sortArr(int arr[], int N) //Sorts the array by keeping a count of all 0's, 1's and 2's and then updating the 0, 1 and 2 based on the counts into the array.
{
    int  i = 0, c0 = 0, c1 = 0, c2 = 0;//Declaring the counters

    for(i = 0; i < N; i++) //Loops over the array and identifies the count of 0's, 1's and 2's
    {
        switch(arr[i]) //Instead of switch statement, if statements can also be used
        {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
        }
    }

    i = 0; //Updating i to 0 as we have to update the array

    //The below loops updates the array with 0's, 1's and 2's based on the count of each.
    while (c0 > 0)
    {
        arr[i++] = 0;//First arr[i] is updated then i is incremented
        c0--;
    }
    while (c1 > 0)
    {
        arr[i++] = 1;
        c1--;
    }
    while (c2 > 0)
    {
        arr[i++] = 2;
        c2--;
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