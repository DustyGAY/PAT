#include <iostream>
#include <string>

int main(){
	std::string a, q;
	int b;
	std::cin >> a >> b;
	int r = 0;
	bool k = 0;
	for(int i = 0; a[i]; i++){
		char temp = char((int(a[i] - '0') + r * 10) / b + int('0'));
		r = (int(a[i] - '0') + r * 10) % b;
		if(temp == '0' && !k)
			continue;
		q += temp;
		k = 1;	
	}
	if(q == "")
		std::cout << 0 << ' ' << r;
	else
		std::cout << q << ' ' << r;
	return 0;
}

