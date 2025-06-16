//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
#include <string.h>
int permutationOfString(char text1[],char text2[]) {
    if (strlen(text1) > strlen(text2)) return 0;
    int count[256] = {0};
    for (int i = 0; i < strlen(text1); i++) {
        count[text1[i]]++;
        count[text2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

// độ phức tạp thời gian : O(n)
// độ phức tạp không gian : O(1)

int main() {
    char text1[100];
    char text2[100];
    printf("Nhập chuỗi thứ nhất: ");
    fgets(text1, 100, stdin);
    text1[strcspn(text1, "\n")] = '\0';
    printf("Nhập chuỗi thứ hai: ");
    fgets(text2, 100, stdin);
    text2[strcspn(text2, "\n")] = '\0';
    permutationOfString(text1, text2) ? printf("true") : printf("false");
    return 0;
}