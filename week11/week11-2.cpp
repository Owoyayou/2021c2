///�Q���xC++std::vector
///#include <stdio.h>��
#include <iostream>�s
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::���Ʀn�h��
int main()
{
	int N;
	///scanf("%d",&N);
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>name[i]>>grade[i];
	}/// ��Ʃ��k�y���ܼƸ�

	for(int i=0;i<N;i++){
		cout<<name[i]<<endl;///end line��ܸ���
	}/// �e�쥪��<<�ܼ�
}
