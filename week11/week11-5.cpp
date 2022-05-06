#include <vector>///vector<???> STL功能
#include <iostream>///cin 或 cout
using namespace std;
int main()
{
	vector<int> v;///v是vector裡面裝int
	///我沒說要多大，所以v有0個
    v.push_back(10);///把10放進去，V有1個
    v.push_back(11);///把11放進去，V有2個
    v.push_back(15);///把13放進去，V有3個

	for(int i=0;i<3;i++){
		cout<<v[i]<<endl;
	}
}
