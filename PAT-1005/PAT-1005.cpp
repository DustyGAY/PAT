#include <iostream>
#include <cstring>

void swap(int* a, int* b);
void shell(int* n, int len);
int main() {
	int k, a[100], a2[100], c[100];
	bool b[100] = { 0 };
	std::cin >> k;
	for (int i = 0; i < k; i++) {
		std::cin >> a[i];
		a2[i] = a[i];
	}
	for (int i = 0; i < k; i++) {
		while (a[i] != 1) {
			if (a[i] % 2)
				a[i] = (a[i] * 3 + 1) / 2;
			else
				a[i] /= 2;
			for (int j = 0; j < k; j++) {
				if (a[i] == a2[j]) {
					b[j] = 1;
					break;
				}
			}
		}
	}
	int n = 0;
	for (int i = k - 1; i >= 0; i--)
		if (!b[i]) {
			c[n] = a2[i];
			n++;
		}
	shell(c, n);
	n--;
	for (int i = 0; i < n; i++)
		std::cout << c[i] << ' ';
	std::cout << c[n];
	return 0;
}

void shell(int* n, int len) {
	for (int div = len / 2; div >= 1; div /= 2)
		for (int i = 0; i < div; i++)
			for (int j = div + i; j < len; j += div)
				for (int k = j; k > i; k -= div)
					if (n[k] > n[k - div])
						swap(&n[k], &n[k - div]);
					else
						break;
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}