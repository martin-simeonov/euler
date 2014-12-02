#include <iostream>
using namespace std;

void fibonacci(unsigned prev, unsigned cur, unsigned &sum) {
	unsigned temp = cur;
	cur += prev;
	prev = temp;

	if (cur < 4000000) {
		if (cur & 1)
			sum += cur;
			
		fibonacci(prev, cur, sum);
	}
}

int main() {
	unsigned sum = 2;
	unsigned &ref = sum;
	
	fibonacci(1, 1, ref);
	
	cout << "The sum of even fibonacci members below 4,000,000 is " << sum << endl;

	return 0;
}
