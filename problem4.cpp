#include <iostream>
#define DIGITS 6

using namespace std;

bool is_palindrome(unsigned n) {
	unsigned digits[DIGITS];
	for (unsigned i = 0; i < DIGITS; ++i) {
		digits[i] = n % 10;
		n = n / 10;
	}

	for (unsigned i = 0; i < DIGITS/2; ++i) {
		if (digits[i] != digits[DIGITS - i - 1])
			break;
		if (i == DIGITS/2 - 1)
			return true;
	}
	return false;
}

int main() {
	unsigned last = 0;
	unsigned n, b;

	for (unsigned a = 999; a > 100; --a) {		
		for (b = 999; b > 100; --b) {
			n = a * b;
			
			if (is_palindrome(n)) {
				if (n > last)
					last = n;
			}
		}
	}
	
	cout << "Largest palindrome made from the product of two "
		 << DIGITS/2 << "-digit numbers is " << last << endl;

	return 0;
}
