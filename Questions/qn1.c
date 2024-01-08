#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
    
    int *LeftArray = (int *)malloc(n1 * sizeof(int));
    int *RightArray = (int *)malloc(n2 * sizeof(int)); 
        
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0,  
    j = 0;    
    k = beg;    
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    

void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  

void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  

int main(){
    int arr[50] = {7,7,5,2,5,2,8,5,6,8,8,7,4,4,7,2,3,8,9,3,2,9,7,8,3};

    printf("Input sequence: ");
    printArray(arr, 25);

    mergeSort(arr, 0, 24);
    printf("\nSorted input sequence: ");
    printArray(arr, 25);

    int x = arr[0];
    int occurrence[25];

    int count = 0;
    int k = 0;
    for(int i=0; i<26; i++){
        if(arr[i] == x) count++;
        else{
            x = arr[i];
            occurrence[k++] = count;
            count = 1;
        }
    }

    printf("\nOccurrences: ");
    printArray(occurrence, 8);

    mergeSort(occurrence, 0, 8);
    printf("\nSorted occurence sequence: ");
    printArray(occurrence, 8);
    
    printf("\nYashvardhan Thakker- 21BIT0060");
    return 0;
}