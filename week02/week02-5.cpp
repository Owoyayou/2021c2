#include<stdio.h>
#include<string.h>
char line[1000];
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(char c)
{
    for(int i=0;tableA;i++){
        if(c==tableA[i])return tableB[i];
    }
    return ' ';
}
int palindrome()
{
    int N=strlen(line);
    for(int i=0;i<N;i++){
        if(line[i]!=line[N-1-i])return 0;///bad=1
    }
    return 1;///通過全部的考驗，沒有壞good
}
int mirror()
{
    int N=strlen(line);
    for(int i=0;i<N;i++){
        if(mirror_char(line[i])!=line[N-1-i])return 0;///bad=1
    }
    return 1;///通過全部的考驗，沒有壞good
}
int main()
{
    while(scanf("%s",line)==1){
        int p=palindrome();///使用函式來判斷，1是，0不是
        int m=mirror();///使用函式來判斷，1是，0不是
        if(p==1 && m==1)printf("%s -- is a mirrored palindrome.n\n",line);
        if(p==1 && m==0)printf("%s -- is a regular palindrome.n\n",line);
        if(p==0 && m==1)printf("%s -- is a mirrored string.n\n",line);
        if(p==0 && m==0)printf("%s -- is not a palindrome.n\n",line);
    }
}

