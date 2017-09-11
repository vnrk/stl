#include <iostream>
#include <vector>
#include <algorithm>
#include <stddef.h>
#include <functional>
using namespace std;

int main() {
	vector<int> v;
	vector<int>::iterator i;
	v.push_back(11);
	v.push_back(22);
	v.push_back(44);
	v.push_back(33);
	v.push_back(22);


	//for (size_t i = 0; i < v.size(); ++i)
	//	cout << v[i] << endl;
	//for (i = v.begin(); i < v.end(); ++i)
	//	cout << *i << endl;
	
	//sort(v.begin(), v.end(), greater<int>());
	
	sort(v.begin(), v.end(), 
		[](const int& left, const int& right) {
			return right < left;
		}
	);
	
	//for (auto i = v.begin(); i < v.end(); ++i)
	//	cout << *i << endl;

	v.erase(remove_if(v.begin(), v.end(), [](int e) {return e % 2 == 1; }), v.end());

	for (auto i = v.begin(); i < v.end(); ++i)
		cout << *i << endl;

	cout << v.size() << endl;
	v.clear();
	
	return 0;
}