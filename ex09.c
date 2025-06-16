//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
void output(int array[100][100],int m,int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
//độ phức tạp thời gian : O(n^2)
//độ phức tạp không gian : O(1)

int mainDiagonal(int array[100][100],int m,int n) {
    int sum = 0;
    if (m != n) {
        printf("Không phải ma trận vuông!");
        return 0;
    }
    for (int i = 0; i < m; i++) {
        sum += array[i][i];
    }
    return sum;
}

//độ phức tạp thời gian : O(n)
//độ phức tạp không gian : O(1)

int main() {
    int m,n;
    printf("Nhập số hàng : ");
    scanf("%d",&m);
    printf("Nhập số cột : ");
    scanf("%d",&n);
    printf("Nhập phần tử vào mảng : \n");
    int array[100][100];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Nhập array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    output(array,m,n);
    printf("Tổng đường chéo chính : %d",mainDiagonal(array,m,n));
}