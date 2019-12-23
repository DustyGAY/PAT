#include <iostream>

int main(){
	int num;
	std::cin >> num;
	int count;
	for(count = 0;num != 1; count++){
		if(num % 2)
			num = (3 * num + 1) / 2;
		else
			num /= 2;	
	}
	std::cout << count;
    return 0;
}