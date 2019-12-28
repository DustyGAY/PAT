#include <iostream>
#include <iomanip>

struct moon{
    float count;
    float total;
    float pre;
};

int main(){
    int number, need;
    std::cin >> number >> need;
    moon cake[number];
    for(int i = 0; i < number; i++)
        std::cin >> cake[i].count;
    for(int i = 0; i < number; i++){
        std::cin >> cake[i].total;
        cake[i].pre = cake[i].total / cake[i].count;
    }
    for(int i = 1; i <= number; i++)
        for(int j = i; j > 0 && cake[j].pre > cake[j - 1].pre; j--){
            moon temp = cake[j];
            cake [j] = cake[j - 1];
            cake[j - 1] = temp;
        }
    float w = 0;
    for(int i = 0; i < number; i++)
        while(need && cake[i].count){
            w += cake[i].pre;
            cake[i].count--;
            need--;
        }
    std::cout << std::fixed << std::setprecision(2) << w;
}