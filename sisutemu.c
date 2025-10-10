
#include <stdio.h>

int main()
{
    /**名前をつけて数字を保存しとく**/
    int  dansei = 12;
    /** printfは、""の間に、表記したい文字を書くよ**/
    printf("男性が%d人います。\n", dansei);
    dansei = dansei/2;
    printf("あ！ごめん！男性が%d人います。\n", dansei);
    return 0;
}