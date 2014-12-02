#include <iostream>
#include <cmath>
using namespace std;

int main() {
	unsigned a[3], b[3], c[3];
	unsigned m[] = {2, 2, 2}, n[] = {1, 1, 1};
	unsigned sum[3];
	
	unsigned prod = 0;
	unsigned swap;
	bool loop = true;
	
	while (loop) {
		for (unsigned i = 0; i < 3; ++i) {
			a[i] = (m[i] * m[i]) - (n[i] * n[i]);
			b[i] = 2 * m[i] * n[i];
			c[i] = (m[i] * m[i]) + (n[i] * n[i]);
		
			sum[i] = a[i] + b[i] + c[i];
			
			if (1000 % sum[i] == 0) {
				unsigned k = 1000 / sum[i];
				prod = (k * a[i]) * (k * b[i]) * (k * c[i]);
				loop = false;
				break;
			}
		}
		
		swap = m[0];
		m[0] = (2 * m[0]) - n[0];
		n[0] = swap;
		
		swap = m[1];
		m[1] = (2 * m[1]) + n[1];
		n[1] = swap;
		
		m[2] = m[2] + (2 * n[2]);
	}
	cout << prod << endl;

	return 0;
}
