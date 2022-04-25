#include <stdio.h>
#include <string.h>//strlen() strcpy() strcmp()
int grade[100];//一百筆整數
char name[100][30];//一百筆字串(30個字元)
char tempName[30];//一筆字串(30個字元)
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",name[i],&grade[i]);
	}///input
	for(int k=0;k<n-1;k++){
		for(int i=0;i<n-1;i++){
			if(grade[i]<grade[i+1]){
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				strcpy(tempName,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],tempName);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s %d\n",name[i],grade[i]);
	}
}
