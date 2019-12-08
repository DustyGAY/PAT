#include <iostream>
#include <string>

int main() {
	std::string a[80];
	int n = 1;
	std::cin >> a[0];
	while (getchar() != '\n')
		std::cin >> a[n++];

	for (int i = 0; i < n / 2; i++) {
		std::string temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (int i = 0; i < n - 1; i++)
		std::cout << a[i] << ' ';
	std::cout << a[n - 1];
	return 0;
}