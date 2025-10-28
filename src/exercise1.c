#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    float arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    float sum = 0;

    for (int i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    float res = sum/10;
    printf("%.3f", res);
}
