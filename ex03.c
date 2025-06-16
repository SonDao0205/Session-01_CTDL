//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
#include <stdlib.h>
int *mallocArray(int n) {
    int* array = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i) {
    array[i] = i;
    }
    return array;
}

int main() {
    mallocArray(5);
    return 0;
}

// độ phức tạp không gian : O(n)