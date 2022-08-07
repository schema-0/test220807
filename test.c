#include <iostream>
// 이 파일은 22-08-07 15:29 수정되었다
using namespace std;

int main( void ) {
	int n;
	cin >> n;

	if( n == 5 ) {
		cout << "*" << endl;
		cout << "**" << endl;
		cout << "***" << endl;
		cout << "****" << endl;
		cout << "*****" << endl;
	} else {
		cerr << "not implemented" << endl;
		return 1;
	}

	return 0;
}
