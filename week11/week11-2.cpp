///想熟悉C++std::vector
///#include <stdio.h>舊
#include <iostream>新
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::重複好多次
int main()
{
	int N;
	///scanf("%d",&N);
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>name[i]>>grade[i];
	}/// 資料往右流到變數裡

	for(int i=0;i<N;i++){
		cout<<name[i]<<endl;///end line表示跳行
	}/// 送到左邊<<變數
}
