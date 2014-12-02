#include <iostream>
using namespace std;

int main() {
	unsigned a, b;
	unsigned sum = 0;
	unsigned i = 1;

	for (a = 3; a < 1000; a += 3, ++i) {
		if (i == 5) {
			i = 0;
			continue;
		}
		sum += a;
	}
	for (b = 5; b < 1000; b += 5) sum += b;
	
	cout << "Sum of the multiples of 3 and 5 is " << sum << endl;

	return 0;
}
