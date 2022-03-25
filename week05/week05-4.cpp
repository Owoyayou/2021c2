#include<stdio.h>
char line[1000];
int main()
{
    int T;
    scanf("%d\n\n",&T);///順便處理掉2個跳行
    for(int t=1;t<=T;t++){
        if(t>1)printf("\n");
        printf("現在讀到第%d大坨的資料\n",t);
        while(gets(line)){
            if(line[0]==0)break;///讀到空白行,表示是下一筆測資
            ///第一個字母,剛好是字串結尾
        }
    }
}
