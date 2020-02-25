#include <iostream>

void Transform(int a, short *number);

char c[32];
int count = 0;

int main(){
    int a, b;
    short number;
    std::cin >> a >> b >> number;
    Transform(a + b, &number);
    for(int i = count - 1; i >= 0; i--)
        std::cout << int(c[i]);
    return 0;    
}

void Transform(int a, short *number){
    if(!a){
        c[0] = 0;
        count++;
        return;
    }
    while(a){
        c[count] = a % *number;
        a /= *number;
        count++;
    }
}

