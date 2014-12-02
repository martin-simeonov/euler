#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<unsigned long> primes;
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
			primes.push_back(i);
			++pN;
		}
	}
}

int main() {
	unsigned long n = 2000000;
	findPrimes(n);
	unsigned long sum = 0;
	for (unsigned i = 0; i < pN; ++i)
		sum += primes[i];
	cout << sum << endl;
	return 0;
}
