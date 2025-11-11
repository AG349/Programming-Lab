#include <stdio.h>

struct Height {
    int feet;
    int inch;
};

int main() {
    struct Height bignesh, harsh, total;

    bignesh.feet = 5;
    bignesh.inch = 10;

    harsh.feet = 5;
    harsh.inch = 6;

    total.feet = bignesh.feet + harsh.feet;
    total.inch = bignesh.inch + harsh.inch;

    if(total.inch >= 12) {
        total.feet += total.inch / 12;
        total.inch = total.inch % 12;
    }

    printf("Total height = %d feet %d inches\n", total.feet, total.inch);

    return 0;
}
