//¸Ñ¨M¦r¦ê±Æ§Çªºinput output
#include<stdio.h>
char line[1000][20];//¦r¦ê°}¦C ¦r¦ê(¦r¤¸°}¦C 20¦r¥À)
//		 1000¦æ 20¦r¥À	¥ª¤âi ¥k¤âj
int main()
{
	int N;
	scanf("%d\n",&N);

	for(int i=0;i<N;i++){//input
		gets(line[i]);
	}

	for(int i=0;i<N;i++){//output
		printf("%s\n",line[i]);
	}
}
