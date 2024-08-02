#include <stdio.h>

int main() {
    
   int array[] = {5, 4, 3, 2, 1};
int n = sizeof(array) / sizeof(array[0]);
int j =0,i=0,min;
for(i=0; i<n-1; i ++){
    min = i;
    for(j=i+1;j<n;j++){
        if(array[j]<array[min]){
            min = j;
        }
    }
    
    if(min != i){
        //swap(array[i], array[min]);
        int temp = array[i];
array[i] = array[min];
array[min] = temp;

    }
}
    
// Print sorted array
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

