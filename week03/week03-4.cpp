#include<stdio.h>
char line[2000];
int main()
{
	int t=1;//1一開始是火車頭不用掛勾
	while(scanf("%s",line)==1){//讀到一筆資料//不定長度用while
		if(t>1)printf("\n");//後面車廂有掛勾
		printf("車廂%d讀到一筆資料\n",t);
		t++;
	}
	return 0;
}
