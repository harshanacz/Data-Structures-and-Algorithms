
#include <stdio.h>

int main() {
    
   int array[] = {5, 4, 8, 2, 1};
int n = sizeof(array) / sizeof(array[0]);
int j =0,i=0;
for(i=0; i <n-1; i++){
    for(j=0; j<n-1-i; j++){
        if(array[j]>array[j+1]){
            int temp = array[j+1];
            array[j+1]=array[j];
            array[j]= temp;
        }
    }
}
    
// Print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

