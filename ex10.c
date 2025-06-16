//
// Created by SonwDao on 16/6/25.
//
#include <stdio.h>
#include <string.h>
//cách 1:
int permutationOfString1(char text1[],char text2[]) {
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

//cách 2:
void sort(char text[]) {
    int n = strlen(text);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if (text[j] > text[j+1]) {
                char temp = text[j];
                text[j] = text[j+1];
                text[j+1] = temp;
            }
        }
    }
}

int permutationOfString2(char text1[],char text2[]) {
    if (strlen(text1) > strlen(text2)) return 0;
    char s1[100];
    char s2[100];
    strcpy(s1, text1);
    strcpy(s2, text2);
    sort(s1);
    sort(s2);
    return strcmp(s1, s2) == 0 ? 1 : 0;
}
// độ phức tạp thời gian : O(n^2)
// độ phức tạp không gian : O(n)

int main() {
    char text1[100];
    char text2[100];
    printf("Nhập chuỗi thứ nhất: ");
    fgets(text1, 100, stdin);
    text1[strcspn(text1, "\n")] = '\0';
    printf("Nhập chuỗi thứ hai: ");
    fgets(text2, 100, stdin);
    text2[strcspn(text2, "\n")] = '\0';
    printf("Cách 1 : \n");
    permutationOfString1(text1, text2) ? printf("true") : printf("false");
    printf("Cách 2 : \n");
    permutationOfString2(text1, text2) ? printf("true") : printf("false");
    return 0;
}