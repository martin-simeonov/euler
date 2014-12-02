#include <iostream>
using namespace std;

int main() {
	unsigned n = 100;
	unsigned sum = (n*(n+1))/2;
	sum *= sum;
	unsigned sq_sum = (n*(n+1)*(2*n+1))/6;
	
	cout << "The difference between the sum of the squares of the "
		 << "first one hundred natural numbers and the square of the sum is "
		 << sum - sq_sum << endl;
	return 0;
}
