#include <iostream>
#include <cmath>
#define MAXN 10001
using namespace std;

unsigned long primes[2 * MAXN];
unsigned pN = 0;

char isPrime(unsigned long n) {
	unsigned i = 0;
	while (i < pN && primes[i] * primes[i] <= n) {
		if (n % primes[i] == 0) return 0;
		++i;
	}
	return 1;
}

void findPrimes(unsigned long n) {
	for (unsigned long i = 2; i < n; ++i) {
		if (isPrime(i)) {
			primes[pN] = i;
			++pN;
		}
	}
}

int main() {
	unsigned long n = MAXN*(log(MAXN) + log(log(MAXN - 1)));
	findPrimes(n);
	cout << "The " << MAXN << "st prime number is " << primes[MAXN - 1] << endl;
	return 0;
}
