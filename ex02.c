//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
void printDouble(int n) {
    int i = 1;
    while(i < n) {
        printf("%d\n", i);
        i*=2;
    }
}
int main() {
    printDouble(10);
    return 0;
}

// Độ phức tạp thời gian : O(log n)