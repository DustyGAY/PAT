#include <iostream>
#include <cstring>

int main(){
	char ch_a[101];
	std::cin >> ch_a;
	int n_sum = 0;
	for(int i = 0; i <= strlen(ch_a) - 1; i++){
		n_sum += int (ch_a[i]) - 48;
	}
	char ch_b[101];
	int i = 10;
	if(!n_sum)
		ch_b[0] = '0';
	else{
		for(int n = 0; n_sum; n++){
			ch_b[n] = n_sum % 10 + 48;
			n_sum /= i; 
		}
	}
	if(strlen(ch_b) - 1){
		for (int i = strlen(ch_b) - 1; i >= 1; i--){
			switch(ch_b[i]){
				case '0':
					std::cout << "ling ";
					break;
				case '1':
					std::cout << "yi ";
					break;
				case '2':
					std::cout << "er ";
					break;
				case '3':
					std::cout << "san ";
					break;
				case '4':
					std::cout << "si ";
					break;
				case '5':
					std::cout << "wu ";
					break;
				case '6':
					std::cout << "liu ";
					break;
				case '7':
					std::cout << "qi ";
					break;
				case '8':
					std::cout << "ba ";
					break;
				case '9':
					std::cout << "jiu ";	
			}
		}
	}
	switch(ch_b[0]){
			case '0':
				std::cout << "ling";
				break;
			case '1':
				std::cout << "yi";
				break;
			case '2':
				std::cout << "er";
				break;
			case '3':
				std::cout << "san";
				break;
			case '4':
				std::cout << "si";
				break;
			case '5':
				std::cout << "wu";
				break;
			case '6':
				std::cout << "liu";
				break;
			case '7':
				std::cout << "qi";
				break;
			case '8':
				std::cout << "ba";
				break;
			case '9':
				std::cout << "jiu";	
		}
    return 0;
}