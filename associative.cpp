#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <functional>
using namespace std;

int main() {
	map <int, string, greater<int>> m;
	m[1] = "one";
	m[2] = "two";
	m[3] = "three";
	m[5] = "five";
	//cout << m[3] << endl;
	for (auto i = m.begin(); i != m.end(); i++)
		cout << i->first << " " << i->second << endl;
	m.clear();
} 

//int main() {
//	unordered_map <int, string> m;
//	m[1] = "one";
//	m[2] = "two";
//	m[3] = "three";
//	m[5] = "five";
//	//cout << m[3] << endl;
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << i->first << " " << i->second << endl;
//	m.clear();
//}

//int main() {
//	map <int, string> m;
//	m[1] = "one";
//	m[2] = "two";
//	m[3] = "three";
//	m[5] = "five";
//	//cout << m[3] << endl;
//	for (auto i = m.begin(); i != m.end(); i++)
//		cout << i->first << " " << i->second << endl;
//	m.clear();
//}