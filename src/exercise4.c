#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    float arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = atof(argv[i + 1]);
    }

    float x = atof(argv[11]);
    int k = atof(argv[12]);

    for (int i = 0; i < k; i++) {
        printf("%.1f ", arr[i]);
        if (i == k-1) {
            printf("%.1f ", x);
        }
    }

    for (int i = k; i < 9; i++) {
        printf("%.1f ", arr[((i+1)%10)]);
    }

}
