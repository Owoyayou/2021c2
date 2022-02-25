#include<stdio.h>
char line[1000];///外面宣告會初始化
int main()
{
    ///char line[1000]沒有初始化
    scanf("%s",line);
    for(int i=0;i<1000;i++){
        if(line[i]=='2')printf("找到2\n");
    }
}
