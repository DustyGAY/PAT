#include <iostream>
#include <string>

int P(std::string *a, char *b);

int main(){
	std::string a, b;
	char da, db;
	std::cin >> a >> da >> b >> db;
	std::cout << P(&a, &da) + P(&b, &db);
	return 0;
}

int P(std::string *a, char *b){
	int count = 0, temp = 0;
	for(int i = 0; (*a)[i]; i++)
		if((*a)[i] == *b)
			count++;
	for(int i = 0; i < count; i++)
		temp = temp * 10 + int(*b - '0');
	return temp;
}