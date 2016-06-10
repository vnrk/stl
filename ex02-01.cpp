/*
 * 		ex02-01.cpp
 * 		TODO
 * 		Created on: 2:14:50 PM Jun 10, 2016
 * 		Author: Venkata 
 */

#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>
using namespace std;

int main(int argc, char **argv) {
	cout << "using reverse algorithm with a string" << endl;
	string st1 = "mark twain";
	reverse(st1.begin(), st1.end());
	cout << st1 << endl;

	cout << "using reverse algorithm with an array" << endl;
	char arr[] = "mark twain";
	int n = strlen(arr);
	reverse(&arr[0], &arr[n]);
	cout << arr;

	return 0;
}



