
///癹伴或糶笿0挡
///程或衡?狦计ゑmax临max传讽
#include <stdio.h>
int main()
{
	int n,max=-99999,min=99999;
	for(int i=0;i<20;i++){
		scanf("%d",&n);
		if(n==0)break;
		if(n>max)max=n;
		if(n<min)min=n;
	}
	printf("[%d,%d]",min,max);
}
