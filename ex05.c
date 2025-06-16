//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
void sortArray(int array[],int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[5] = {4,2,6,1,8};
    int n = sizeof(array)/sizeof(array[0]);
    sortArray(array,n);
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp không gian : O(1)