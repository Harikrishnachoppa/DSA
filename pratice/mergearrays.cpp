#include<stdio.h>
#include<stdlib.h>

int A[] = {4, 2, 8, 6, 10};
int B[] = {5, 3, 9, 7, 13, 11};
int m = sizeof(A) / sizeof(A[0]);
int n = sizeof(B) / sizeof(B[0]);
int x = m + n;
int *C;

void merge() {
    // Dynamically allocate memory for C
    C = (int *)malloc(x * sizeof(int));
    if (C == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit program if memory allocation fails
    }
    
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    while (i < m) {
        C[k++] = A[i++];
    }
    while (j < n) {
        C[k++] = B[j++];
    }
}


void display() {
    for (int i = 0; i < x; i++) {
        printf("%d\t", C[i]);
    }
    printf("\n");
}

int main() {
    merge();
    display();
    
    // Free dynamically allocated memory for C
    free(C);
    
    return 0;
}

