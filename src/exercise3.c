#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    float arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = atof(argv[i + 1]);
    }

    int k = atof(argv[11]);

    if (k > 0) {

        for (int i = 0; i < 10; i++) {
            printf("%.1f", arr[((i+k)%10)]);
        }
    } else {
        for (int i = 0; i < 10; i++) {
            printf("%.1f", arr[((i+k+10)%10)]);
        }
    }

}
