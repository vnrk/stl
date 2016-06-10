/*
 * 		ex02-02.cpp
 * 		TODO
 * 		Created on: 3:07:31 PM Jun 10, 2016
 * 		Author: Venkata
 */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cassert>
#include <algorithm>
using namespace std;

template <typename Container>
Container make (const char s[])
{
	return Container(&s[0], &s[strlen(s)]);
}

int main(int argc, char **argv) {
	cout << "using reverse algorithm with a vector and a list" << endl;
	vector<char> v1 = make< vector<char> >("mark twain");
	reverse(v1.begin(), v1.end());
	assert(v1 == make< vector<char> >("niawt kram") );
	cout << "Ok" << endl;

	list<char> l1 = make< list<char> >("mark twain");
	reverse(l1.begin(), l1.end());
	assert(l1 == make< list<char> >("niawt kram") );
	cout << "Ok" << endl;

	return 0;
}


