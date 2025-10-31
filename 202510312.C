#include <stdio.h>

int main()
{
    int k;
    printf("今回何匹釣った？？");
    scanf("%d",&k);
    
    if (k >=10)
    {
        printf("たくさん釣りましたね！");
    
    }
    
    else if(k <1)
    {
        printf("ダメですね...");
        
    }
    
    else
    {
        printf("まあまあ釣りましたね。");
        
    }
    
    return 0;
}
