#include <stdio.h>
int grade[100];
char name[100][30];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",name[i],&grade[i]);
	}///input
	for(int k=0;k<n-1;k++){//很多次
		for(int i=0;i<n-1;i++){//核心
			if(grade[i]<grade[i+1]){
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s %d\n",name[i],grade[i]);
	}
}
