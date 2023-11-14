#include <stdio.h>

#include "variadic_fuctions.h"

int main() {
    int result1 = sum_them_all(4, 1, 2, 3, 4);
    printf("Sum 1: %d\n", result1);

    int result2 = sum_them_all(3, 5, 10, 15);
    printf("Sum 2: %d\n", result2);

    int result3 = sum_them_all(0);  // n is 0, should return 0
    printf("Sum 3: %d\n", result3);

    return 0;
}
