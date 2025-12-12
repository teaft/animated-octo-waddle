#include <stdio.h>
#include <string.h>

int main() {

    char password[100];
    int length;
    int hasUpper = 0; // 大文字があるか
    int hasLower = 0; // 小文字があるか

    printf("パスワードを入力してください： ");
    scanf("%s", password);

    length = strlen(password);

    // 1文字ずつ確認する
    for (int i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
        }
        if (password[i] >= 'a' && password[i] <= 'z') {
            hasLower = 1;
        }
    }

    printf("\n入力したパスワード：%s\n", password);
    printf("文字数：%d\n", length);

    // 条件チェック
    if (length >= 8 && hasUpper == 1 && hasLower == 1) {
        printf("→ 強いパスワードです。\n");
    } else {
        printf("→ パスワードが弱いです。改善点：\n");
        if (length < 8) {
            printf("・8文字以上にしてください。\n");
        }
        if (hasUpper == 0) {
            printf("・大文字を入れてください。\n");
        }
        if (hasLower == 0) {
            printf("・小文字を入れてください。\n");
        }
    }

    return 0;
}