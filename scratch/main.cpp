#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 0;
	int z[10][10];

	for(int i = 0; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			z[i][j] = x;
			++x;
		}
	}

	for(int i = 0; i < 10; ++i) {
		if(i == 4) {
			break;
		}
		for(int j = 0; j < 10; ++j) {
			cout << z[i][j] << endl;
		}
	}

	string y[][5] = {
		{
			"John Doe",
			"1234 Whitehall Road",
			"67834",
			"Washington, US",
			"555-555-5555"
		},
		{
			"Jane Smith",
			"1962 Herbert Street",
			"49678",
			"Florida, US",
			"123-456-7890"
		}
	};

	for(int i = 0; i < (sizeof(y) / sizeof(*y)); ++i) {
		for(int j = 0; j < (sizeof(y[i]) / sizeof(*y[i])); ++j) {
			cout << y[i][j] << endl;
		}
		cout << endl;
	}

	return 0;
}