#include <iostream>
using namespace std;

int main( void ) {
	int n;
	cin >> n;

	if( n == 5 ) {
		cout << "*" << endl;
		cout << "**" << endl;
		cout << "***" << endl;
		cout << "****" << endl;
		cout << "________" << endl; // at master
	} else {
		cerr << "not implemented" << endl;
		return 1;
	}

	return 0;
}
