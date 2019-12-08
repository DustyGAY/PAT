#include <iostream>

void dao(int* mi, int* zhi);

int main() {
	int mi, zhi;
	bool k = 0, j = 0;
	do {
		std::cin >> mi >> zhi;
		if(zhi && mi){
			if(j)
				std::cout << ' ';
			dao(&mi, &zhi);
			k = 1;
			j = 1;
		}
	} while (getchar() != '\n');
	if(!k)
		std::cout << "0 0";
	return 0;
}

void dao(int* mi, int* zhi) {
	*mi *= *zhi;
	*zhi -= 1;
	std::cout << *mi << ' ' << *zhi;
	return;
}