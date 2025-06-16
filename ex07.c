//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
#define MAX 1001
// cách 1 :
int dubplicate1(int array[],int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (i == j) continue;
            if (array[i] == array[j]) {
                return 1;
            }
        }
    }
    return 0;
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp không gian : O(1)

// cách 2 :
int dubplicate2(int array[],int length) {
    int flag[MAX] = {0};
    for (int i = 0; i < length; ++i) {
        if (array[i] < 0 || array[i] > MAX) return -1;
        if (flag[array[i]] == 1) {
            return 1;
        }
        flag[array[i]] = 1;
    }
    return 0;
}

// độ phức tạp thời gian : O(n)
// độ phức tạp không gian : O(MAX)

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array)/sizeof(array[0]);
    // dubplicate1(array, length) ? printf("có phần tử trùng lặp\n") : printf("không có phần tử trùng lặp\n");
    dubplicate2(array, length) ? printf("có phần tử trùng lặp\n") : printf("không có phần tử trùng lặp\n");
}

