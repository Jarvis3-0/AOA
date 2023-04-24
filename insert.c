#include <stdio.h>

void disp(int arr[], int size)
{ 
    int i; 
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    disp(arr, size);
    for (i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            disp(arr, size);
        }
        arr[j + 1] = key;
        disp(arr, size);
    }
}