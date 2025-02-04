#include<stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n - 1) + n;
    }
}

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    // Call the sum function and print the result
    int result = sum(x);
    printf("The sum of numbers from 1 to %d is: %d\n", x, result);

    return 0;
}

