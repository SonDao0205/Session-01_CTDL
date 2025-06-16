//
// Created by SonwDao on 16/6/25.
//
#include <iso646.h>
#include <stdio.h>
void item(int array[],int length) {
    int max_count = 0;
    int max_number = array[0];
    int count = 1;
    for (int i = 0; i < length; i++) {
        count = 1;
        for (int j = 0; j < length; j++) {
            if (i == j) continue;
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_number = array[i];
        }
    }
    printf("\nPhần tử xuất hiện nhiều nhất :  %d\nSố lần xuất hiện :  %d\n", max_number, max_count);
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp không gian : O(1)

int main() {
    int array[5] = {2,5,2,5,5};
    int length = sizeof(array)/sizeof(array[0]);
    item(array,length);
}