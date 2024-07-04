#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int linearSearch(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
            return val;
    }
    return -1;
}

int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    if (end >= beg)
    {
        mid = (beg + end) / 2;
        if (a[mid] == val)
        {
            return val;
        }
        else if (a[mid] < val)
        {
            return binarySearch(a, mid + 1, end, val);
        }
        else
        {
            return binarySearch(a, beg, mid - 1, val);
        }
    }
    return -1;
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int arr[50];
    int n;

    printf("Enter length of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        printf("Input: ");
        scanf("%d", &x);
        arr[i] = x;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == x)
            {
                printf("Duplicate Alert!!! Enter again!!!\n");
                i -= 1;
                break;
            }
        }
    }

    int new_arr[50];
    int new_length = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            new_arr[new_length++] = arr[i];
        }
    }

    printf("\nIntermediate sequence: ");
    for(int i=0;i<new_length;i++)
    {
        printf("%d ",new_arr[i]);
    }
    

    int *temp = (int *)malloc(new_length * sizeof(int));
    for (int i = 0; i < new_length; i++)
    {
        temp[i] = new_arr[i];
    }

    int min2 = temp[1];
    free(temp);

    // Linear Search
    int linearSearchIndex = linearSearch(new_arr, new_length, min2);
    printf("\n\nSecond Smallest Index: 1 and value is (Linear Search): %d", linearSearchIndex);

    // Binary Search
    int binarySearchIndex = binarySearch(new_arr, 0, new_length, min2);
    printf("\nSecond Smallest Index: 1 and value is (Binary Search): %d", binarySearchIndex);
    printf("\n\nYashvardhan Thakker- 21BIT0060");

    return 0;
}