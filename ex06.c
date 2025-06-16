//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
int countArray(int array[],int n,int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] == n) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int array[10] = {3,6,2,7,3,1,4,7,2,3};
    int length = sizeof(array)/sizeof(array[0]);
    printf("%d\n", countArray(array,n,length));
}

// độ phức tạp thời gian : O(n)
// độ phức tạp không gian : O(1)