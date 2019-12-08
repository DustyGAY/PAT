#include <iostream>
#include <cmath>

void Su(int start, int end);

int main() {
	int start, end;
	bool k = 0;
	std::cin >> start >> end;
	Su(start, end);
	return 0;
}

void Su(int start, int end) {
	int* n = new int[end];
	int count = 1;
	n[0] = 2;
	for (int i = 3; count < end ; i += 2) {
		bool k = 1;
		for (int j = 2; j <= sqrt(i); j++)
			if (!(i % j)) {
				k = 0;
				break;
			}
		if (k) 
			n[count++] = i;
	}
	std::cout << n[start - 1];
	for (int i = start; i < end; i++) {
		if ((i - start) % 10 == 9)
			std::cout << std::endl;
		else
			std::cout << ' ';
		std::cout << n[i];
	}
	return;
}