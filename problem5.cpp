#include <iostream>
using namespace std;

int main() {
	unsigned n = 20;
	bool go = true;
	
	while(go) {
		for(unsigned i = 20; i > 1; --i) {
			if (n % i != 0) {
				break;
			} else if (i == 2) {
				cout << "The smallest positive number that is evenly "
					 << "divisible by all of the numbers from 1 to 20 is "
					 << n << endl;
				go = false;
				break;	
			}
		}
		n++;
	}

	return 0;
}
