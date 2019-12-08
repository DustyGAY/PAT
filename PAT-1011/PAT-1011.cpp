#include <iostream>

bool compare(long long a, long long b);

int main(){
	int count;
	long long c , a, b;
	std::cin >> count;
	for(int i = 1; i <= count; i++){
		std::cin >> a >> b >> c;
		std::cout << "Case #" << i <<": " <<std::boolalpha << compare(a + b, c) << '\n';
	}
}

bool compare(long long a, long long b){
	if(a > b)
		return 1;
	else
		return 0;
}