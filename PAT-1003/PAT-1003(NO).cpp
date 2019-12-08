#include <iostream>
#include <cstring>

bool pan(char ch_a[101]);
bool change(char ch_a[101]); 


int main(){
	int n_time;
	char ch_a[101];
	std::cin >> n_time;
	std::cin.get();
	for(int i = 1; i <= n_time; i++){
		for (int i = 0; std::cin.get(ch_a[i]); i++) {
			if (ch_a[i] == '\n') {
				ch_a[i] = '\0';
				break;
			}
		}
		int temp_P = 0, temp_A = 0, temp_T = 0;
		bool k = 1;
		for(int n = 0; n < strlen(ch_a); n++){
			switch(ch_a[n]){
				case 'P':
					temp_P++;
					break;
				case 'A':
					temp_A++;
					break;
				case 'T':
					temp_T++;
					break;
				default:
					k = 0;
			}
		}
		if(!temp_P || !temp_A || !temp_T || !k)
			std::cout << "NO\n";
		else 
			if(pan(ch_a))
				std::cout << "YES\n";
			else
				if (change(ch_a))
					std::cout << "YES\n";
				else
					std::cout <<"NO\n";		
	}
	return 0;
}

bool pan(char ch_a[101]){
	int n = 0;
	bool k = 1;
	while(ch_a[n] == 'A')
		n++;
	if(ch_a[n] != 'P')
		k = 0;
	if(ch_a[n+1] != 'A')
		k = 0;
	if(ch_a[n+2] != 'T')	
		k = 0;
	if(k){
		int m;
		for(m = n + 3; m < strlen(ch_a); m++)
			if (ch_a[m] != 'A'){
				m = -1;
				break;
			}
		if(n != m - n - 3)
			k = 0;
	}
	return k;
}

bool change(char ch_a[101]){
	int a = 0, b = 0, c = 0;
	int i;
	bool k = 1;
	for(i = 0; ch_a[i] == 'A'; i++)
		a++;
	if(ch_a[i] != 'P')
		k = 0;
	for(i = i + 1; ch_a[i] == 'A' && ch_a[i + 1] == 'A'; i++)
		b++;
	if(ch_a[i + 1] != 'T')
		k = 0;
	for(i = i + 2; ch_a[i] == 'A'; i++)
		c++;
	if(a * b != c)
		k = 0;
	return k;
}
