/**文字を表示するためのプログラム**/


#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しとくよ**/
    int waribiki = 90;
    waribiki = 120;
    printf("電車賃が%d％割引されます\n", waribiki);
    waribiki = waribiki/2;
    /**printfは、""の間に、表記したい文字を書くよ**/
    printf("あ！ごめん！電車賃が%d％割引されます！\n",waribiki);

 /**return Θ;はプログラム終了**/
    return 0;
}