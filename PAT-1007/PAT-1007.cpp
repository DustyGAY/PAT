#include <iostream>
#include <cmath>
bool Su(int a);

int main() {
	int n, count = 0;
	std::cin >> n;
	bool temp1 = 1, temp2;
	for (int i = 3; i < n - 1; i += 2){
		temp2 = Su(i + 2);
		if(temp1 && temp2)
			count++;
		temp1 = temp2;
	}
		
	std::cout << count;
	return 0;
}

bool Su(int a) {
	bool k = 1;
	for (int i = 2; i <= sqrt(a); i++)
		if (!(a % i)) {
			k = 0;
			break;
		}
	return k;
}