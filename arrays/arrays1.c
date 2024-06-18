#include <stdio.h>

int main() {
    int array[2][3] = {
        {1,3,4},
        {1,4,6}
    };
    
    for(int i =0; i<2; i++){
        for(int y =0; y<3; y++){
            printf("%d", array[i][y]);
            printf("\n");
        }
    }

    return 0;
}