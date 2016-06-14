/*
 * 		ex02-04.cpp
 * 		TODO
 * 		Created on: 10:56:53 AM Jun 14, 2016
 * 		Author: Venkata 
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char **argv) {
	map <string, long> directory;
	directory["bogart"] = 1234567;
	directory["bacall"] = 2345678;
	directory["cagney"] = 6793002;

	string name;
	while(cin >> name) {
		if(directory.find(name) != directory.end())
			cout << "phone number for " << name << " is " << directory[name] << "\n";
		else
			cout << "not found" << endl;
	}
	return 0;
}






