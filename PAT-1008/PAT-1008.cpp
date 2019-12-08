#include <iostream>

int main(){
	int count, k;
	std::cin >> count >> k;
	int* a = new int[count];
	int* b = new int[count];
	k %= count;
	for(int i = 0; i < count; i++)
		std::cin >> a[i];
	for(int i = k; i < count; i++)
		b[i] = a[i - k];
	for(int i = 0; i < k; i++)
		b[i] = a[count - k + i];
	for(int i = 0; i < count - 1; i++)
		std::cout << b[i] << ' ';
	std::cout << b[count - 1];
	return 0;
} 