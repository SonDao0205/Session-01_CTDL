//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
//cách 1:
int sum1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}
// độ phức tạp không gian : O(1)

//cách 2:
int sum2(int n) {
    return n * (n + 1) / 2;
}
// độ phức tạp không gian : O(1)