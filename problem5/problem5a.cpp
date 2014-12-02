#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<unsigned> prime_factors(unsigned n) {
	unsigned how, i, j;
	vector<unsigned> factors;
	
	i = 1;
	while (n != 1) {
		i++;
		how = 0;
		while (0 == n % i) {
			how++;
			n = n / i;
		}
		
		for (j = 0; j < how; j++)
			factors.push_back(i);
	}
	
	return factors;
}

int main() {
	vector<unsigned> factors;

	for(unsigned i = 20; i > 1; --i) {
		vector<unsigned> primes = prime_factors(i);
		
		for (vector<unsigned>::iterator it = primes.begin(); it != factors.end(); it++) {
			unsigned x1 = count(factors.begin(), factors.end(), *it);
			unsigned x2 = count(primes.begin(), primes.end(), *it);
			
			if (x2 > x1) {
				for (unsigned j = 0; j < (x2 - x1); j++)
					factors.push_back(*it);
			}
		}
	}
	
	unsigned n = 1;
	
	for (vector<unsigned>::iterator it = factors.begin(); it !=  factors.end(); it++)
		n *= (*it);
	
	cout << "The smallest positive number that is evenly "
		 << "divisible by all of the numbers from 1 to 20 is "
		 << n << endl;

	return 0;
}
