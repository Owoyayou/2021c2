#include<stdio.h>
int main()
{
    printf("現在要讀入字串: ");

    char c;///字串,字母
    scanf("%c",&c);///讀入
    printf("讀到整數: %c\n",c);

    char line[1000];///char s[10]
    scanf("%s",line);///讀入
    printf("讀到字串: %s\n,line");

    return 0;
}
