///week10-1.cpp一定要.cpp檔 模仿今天檔案，但改用檔案
///(1)檔案(2)排序分數大-小
#include <stdio.h>
#include <string.h>///strcmp()
char name[100][30],tempName[30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin, "%d" , &N);
    for(int i=0;i<N;i++){
       fscanf(fin,"%s %d" ,name[i],&grade[i]);
    }
    for(int k=0;k<N-1;k++){
		for(int i=0;i<N-1;i++){
			if(grade[i]<grade[i+1]){///比大小不對就"交換"
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				strcpy(tempName, name[i]);///也是交換
				strcpy(name[i] ,name[i+1]);
				strcpy(name[i+1],tempName);
			}
		}
	}
    for(int i=0;i<N;i++){
        printf("%s %d\n",name[i],grade[i]);
    }
}
