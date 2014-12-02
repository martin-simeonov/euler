#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	unsigned n;
	
	if (argc != 2) {
		return -1;
	} else {
		n = atoi(argv[1]);
	}
	
	unsigned how, i, j;
	
	printf("%u = ", n);
	i = 1;
	while (n != 1) {
		i++;
		how = 0;
		while (0 == n % i) {
			how++;
			n = n / i;
		}
		for (j = 0; j < how; j++)
		printf("%u ", i);
	}
	printf("\n");
	return 0;
}
