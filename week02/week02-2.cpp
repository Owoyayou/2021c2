///week02-2
#include<stdio.h>
#include<string.h>//strlen()�禡
char line[1000];
int palindrome()
{
    int N=strlen(line);
    for(int i=0;i<N;i++){
        if(line[i]!=line[N-1-i])return 0;///bad=1
    }
    return 1;///�q�L����������A�S���agood
}
int main()
{
    while(scanf("%s",line)==1){
        int p=palindrome();///�ϥΨ禡�ӧP�_�A1�O�A0���O
        if(p==1)printf("%s -- is a regular palindrome.n\n",line);
        if(p==0)printf("%s -- is not a palindrome.n\n",line);
    }
}
