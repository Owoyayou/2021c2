#include<stdio.h>
char line[1000];
int main()
{
	int t=1;
	while(gets(line)){
		if(t>1)printf("\n");

		int ans[256]={};//�M��0
		for(int i=0;line[i]!=0;i++){
			char c=line[i];//�{�b���r��c
			ans[c]++;//�έp+1
		}
		for(int c=128;c>=32;c--){//�L����
			if(ans[c]>0)printf("%d %d\n",c,ans[c]);
		}
		t++;
	}
	return 0;
}