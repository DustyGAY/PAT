#include <iostream>
#include <iomanip>

void A1(int* a, int k);
void A2(int* a, int k);
void A3(int* a, int k);
void A4(int* a, int k);
void A5(int* a, int k);

int main() {
	int count;
	std::cin >> count;
	int* a = new int[count];
	for (int i = 0; i < count; i++)
		std::cin >> a[i];
	A1(a, count);
	A2(a, count);
	A3(a, count);
	A4(a, count);
	A5(a, count);
}

void A1(int* a, int k) {
	int temp = 0, j = 0;
	for (int i = 0; i < k; i++) {
		if (!(a[i] % 5) && !(a[i] % 2)) {
			temp += a[i];
			j++;
		}
	}
	if (j)
		std::cout << temp << ' ';
	else
		std::cout << 'N' << ' ';
	return;
}

void A2(int* a, int k) {
	int temp = 0, j = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] % 5 == 1) {
			if (!(j % 2))
				temp += a[i];
			else
				temp -= a[i];
			j++;
		}
	}
	if (j)
		std::cout << temp << ' ';
	else
		std::cout << 'N' << ' ';
	return;
}

void A3(int* a, int k) {
	int temp = 0, j = 0;
	for (int i = 0; i < k; i++) {
		if ((a[i] % 5) == 2) {
			temp++;
			j++;
		}
	}
	if (j)
		std::cout << temp << ' ';
	else
		std::cout << 'N' << ' ';
	return;
}

void A4(int* a, int k) {
	double temp = 0;
	int z = 0;
	for (int i = 0; i < k; i++) {
		if ((a[i] % 5) == 3) {
			temp += a[i];
			z++;
		}
	}
	if (z)
		std::cout << std::fixed << std::setprecision(1) << temp / z << ' ';
	else
		std::cout << 'N' << ' ';
	return;
}

void A5(int* a, int k) {
	int temp = 0, j = 0;
	for (int i = 0; i < k; i++) {
		if ((a[i] % 5) == 4){
			if (temp < a[i])
				temp = a[i];
			j++;
		}
	}
	if (j)
		std::cout << temp;
	else
		std::cout << 'N';
	return;
}