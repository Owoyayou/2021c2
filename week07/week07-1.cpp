//�ѨM�r��ƧǪ�input output
#include<stdio.h>
char line[1000][20];//�r��}�C �r��(�r���}�C 20�r��)
//		 1000�� 20�r��	����i �k��j
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
