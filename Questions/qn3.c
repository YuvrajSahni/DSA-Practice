#include<stdio.h>
#include<stdlib.h>

int h(long int key){
    int sum = 0;
    while(key > 0){
        sum += key%1000;
        key = key/1000;
    }
    return sum%1000;
}

int main(){
    long int h_Table[1000], n;
    for(int i=0; i<1000; i++){
        h_Table[i] = 0;
    }

    printf("Enter the number of keys: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int key, index;
        printf("\nEnter key: ");
        scanf("%ld", &key);
        index = h(key);
        if(h_Table[index] == 0){
            h_Table[index] = key;
        }
        else{
            printf("\nCOLLISION OCCURED!!!\nExisting Element: %ld\n", h_Table[index]);
            int probe = 1;
            while(h_Table[index] != 0){
                index += probe*probe;
            }
            h_Table[index] = key;
        }
    }

    printf("\nHASH TABLE -->\n\n");
    for(int i=0; i<1000; i++){
        if(h_Table[i] != 0){
            printf("%d --> %ld\n", i, h_Table[i]);
        }
    }
    printf("\nYashvardhan Thakker- 21BIT0060");

    return 0;
}