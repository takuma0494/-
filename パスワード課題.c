/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char password[100];
    int hasUpper = 0;
    int hasLower = 0;

    printf("パスワードを入力してください: ");
    scanf("%99s", password);

    int length = strlen(password);

    // 各文字をチェック
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (islower(password[i])) {
            hasLower = 1;
        }
    }

    // 判定結果
    if (length >= 8 && hasUpper && hasLower) {
        printf("このパスワードは強いパスワードです。\n");
    } else {
        printf("このパスワードは強いパスワードではありません。\n");
        printf("改善点:\n");

        if (length < 8) {
            printf("・文字数を8文字以上にしてください。\n");
        }
        if (!hasUpper) {
            printf("・大文字（A～Z）を含めてください。\n");
        }
        if (!hasLower) {
            printf("・小文字（a～z）を含めてください。\n");
        }
    }

    return 0;
}