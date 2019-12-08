#include <iostream>
#include <cstring>

int main(){
	struct student{
		std::string name;
		std::string number;
		int score;
	};
	
	int count;
	std::cin >> count;
	student a[count];
	for(int i = 0; i < count; i++){
		std::cin >> a[i].name;
		std::cin >> a[i].number;
		std::cin >> a[i].score;
	}
	int temp1 = -1, temp2 = 101, number ;
	for(int i = 0; i < count; i++){
		if(a[i].score > temp1){
			number = i;
			temp1 = a[i].score;
		}
	}
	std::cout << a[number].name << ' ' << a[number].number << std::endl;
	for(int i = 0; i < count; i++){
		if(a[i].score < temp2){
			number = i;
			temp2 = a[i].score;
		}
	}
	std::cout << a[number].name << ' ' << a[number].number;
	return 0;
}