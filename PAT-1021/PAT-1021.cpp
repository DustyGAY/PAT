#include <iostream>

int main(){
    char a[1001];
    int count = 0;
    a[count] = getchar();
    while(a[count] != '\n'){
        count++;
        a[count] = getchar();
    }
    int number[10] = {0};
    for(int i = 0; i < count; i++)
        number[int(a[i] - '0')]++;
    for(int i = 0; i < 10; i++)
        if(number[i])
            std::cout << i << ':' << number[i] << std::endl;
}