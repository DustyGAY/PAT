#include <iostream>

int main(){
	int n_num;
	std::cin >> n_num;
	int i;
	for(i = 0;n_num != 1; i++){
		if(n_num % 2)
			n_num = (3 * n_num + 1) / 2;
		else
			n_num /= 2;	
	}
	std::cout << i;
    return 0;
}