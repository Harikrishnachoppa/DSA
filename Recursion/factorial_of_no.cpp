#include<stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    int result = fact(x);
    printf("The factorial of number %d is: %d",x,result);

    return 0;
}

