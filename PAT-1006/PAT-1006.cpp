#include <iostream>
#include <cstring>

int main(){
	std::string n;
	std::cin >> n;
	if(n.length() == 2)
		n = "0" + n;
	if(n.length() == 1)
		n = "00" + n;
	if(n.length() == 0)
		n = "000" + n;
	for(int i = 1; i <= n[0] - 48; i++)
		std::cout << 'B'; 
	for(int i = 1; i <= n[1] - 48; i++)
		std::cout << 'S'; 
	for(int i = 1; i <= n[2] - 48; i++)
		std::cout << i; 
	return 0;
} 