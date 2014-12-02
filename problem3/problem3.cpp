#include <iostream>
using namespace std;

int main() {
	unsigned i = 1;
	unsigned long n = 600851475143;
	
	cout << "Largest prime factor of the number " << n;

	while (n != 1) {
		i++;
		while (0 == n % i)
			n = n / i;
	}
	
	cout << " is " << i << endl;

	return 0;
}
