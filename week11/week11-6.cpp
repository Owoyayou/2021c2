#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v;///v�Ovector�̭���int
	///�ڨS���n�h�j�A�ҥHv��0��
    v.push_back(10);///��10��i�h�AV��1��
    v.push_back(11);///��11��i�h�AV��2��
    v.push_back(15);///��13��i�h�AV��3��

    vector<int>::iterator it;
	for(it=v.begin(); it!= v.end(); it++){
		cout<<*it<<endl;
	}
}

