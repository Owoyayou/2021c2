#include<stdio.h>
char line[1000];
int main()
{
    int T;
    scanf("%d\n\n",&T);///���K�B�z��2�Ӹ���
    for(int t=1;t<=T;t++){
        if(t>1)printf("\n");
        printf("�{�bŪ���%d�j�@�����\n",t);
        while(gets(line)){
            if(line[0]==0)break;///Ū��ťզ�,��ܬO�U�@������
            ///�Ĥ@�Ӧr��,��n�O�r�굲��
        }
    }
}
