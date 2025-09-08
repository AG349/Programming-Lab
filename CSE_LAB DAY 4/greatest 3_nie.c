#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the greatest number.\n", a);
        }
        else if (c > a) {
            printf("%d is the greatest number.\n", c);
        }
        else {
            printf("%d and %d are equal and greatest.\n", a, c);
        }
    }
    else if (b > a) {
        if (b > c) {
            printf("%d is the greatest number.\n", b);
        }
        else if (c > b) {
            printf("%d is the greatest number.\n", c);
        }
        else {
            printf("%d and %d are equal and greatest.\n", b, c);
        }
    }
    else {
        if (a > c) {
            printf("%d and %d are equal and greatest.\n", a, b);
        }
        else if (c > a) {
            printf("%d is the greatest number.\n", c);
        }
        else {
            printf("All three numbers are equal.\n");
        }
    }

    return 0;
}
