#include <stdio.h>

int main()
{
    int A[] = {5, 2, 4, 6, 1, 3, 10, 7, 9, 8}; //array
    int i, j, key;                             //aux
    int n = (int)sizeof(A) / sizeof(A[0]);     //array length

    printf("Array Length: %d\n", n);

    for (j = 0; j < n; j++) //current value j
    {
        key = A[j]; //unsorted array
        printf("Current: %d\n", key);

        i = j - 1; //insert A[j] into the sorted sequence A[1..j - 1]

        while (i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }

    //print the sorted array
    for (i = 0; i < n; i++)
    {
        printf("Sorted: %d\n", A[i]);
    }

    return 0;
}
