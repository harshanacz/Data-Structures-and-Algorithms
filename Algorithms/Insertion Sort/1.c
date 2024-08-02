#include <stdio.h>

int main() {
    
   int array[] = {5, 4, 3, 2, 1};
int n = sizeof(array) / sizeof(array[0]);
int j =0,i=0,temp;
    for(i=0; i<n; i++){
        temp = array[i];
        j = i-1;
        while (j>=0 && array[j]>temp){
            array[j+1]= array[j];
            j--;
        }
        array[j+1]=temp;
    }
// Print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

