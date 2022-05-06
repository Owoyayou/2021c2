#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v;///v是vector裡面裝int
	///我沒說要多大，所以v有0個
    v.push_back(10);///把10放進去，V有1個
    v.push_back(11);///把11放進去，V有2個
    v.push_back(15);///把13放進去，V有3個

    vector<int>::iterator it;
	for(it=v.begin(); it!= v.end(); it++){
		cout<<*it<<endl;
	}
}

