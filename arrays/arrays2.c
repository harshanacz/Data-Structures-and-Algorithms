
#include <stdio.h>

int main() {
    int array[2][2][2] = {
        {{1,2},{2,3}},
           {{3,5},{6,2}},
    };
    
    for(int i =0; i<2; i++){
        for(int y =0; y<2; y++){
            for (int j =0; j<2 ; j++){
                printf("%d", array[i][y][j]);
            printf("\n");
            }
        }
    }

    return 0;
}