#include <stdio.h>

int main(){
    int arr[5] = {6, 4, 8, 10, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int tempValue,j;
    for (int i = 1; i<size; i++){
        tempValue = arr[i];
        j = i -1;
        while(j>=0 && arr[j]>tempValue){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tempValue;
    }

    for(int z = 0; z <size ;  z++){
        printf("%d", arr[z]);
        printf("\n");
    }
    return 0;
}