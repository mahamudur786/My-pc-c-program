#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
	catch (char x) {
		cout << "Caught "<<x;
	}
	return 0;
}

