#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    float ar[10][10];
    float arr[10][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12},{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float raa[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ar[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                ar[i][j] += arr[i][k] * raa[k][j]; 
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <10; j++) {
            printf("%.1f ", ar[i][j]);
        }
        printf("\n");
    }
}
