#include <iostream>

void Sort(char a[]);
void Swap(char *a, char *b);
void minus(char a[]);

int main(){
    char number[5];
    int k = 0;
    std::cin >> number[0];
    while(number[k] != '\n'){
        k++;
        number[k] = getchar();        
    }
    for(int i = k; i < 4; i++)
        for(int j = 0; j < k; j++)
            number[i - j] = number[i - j - 1];
    for(int i = 0; i <= 3 - k; i++)
        number[i] = '0';
    if(number[0] == '0' && number[1] == '0' && number[2] == '0' && number[3] == '0'){
        std::cout << "0000 - 0000 = 0000";
        return 0;
    }
    if(number[0] == '6' && number[1] == '1' && number[2] == '7' && number[3] == '4'){
        std::cout << "7641 - 1467 = 6174";
        return 0;
    }
    while(!(number[0] == '0' && number[1] == '0' && number[2] == '0' && number[3] == '0') && !(number[0] == '6' && number[1] == '1' && number[2] == '7' && number[3] == '4')){
        Sort(number);
        for(int i = 0; i <= 3; i++)
            std::cout << number[i];
        std::cout << " - ";
        for(int i = 3; i >= 0; i--)
            std::cout << number[i];
        std::cout << " = ";
        minus(number);
        for(int i = 0; i <= 3; i++)
            std::cout << number[i];
        std::cout << std::endl;
    }
    return 0;
}

void Sort(char a[]){
    for(int i = 1; i <= 3; i++)
        for(int j = i; j > 0 && a[j] > a[j - 1]; j--)
            Swap(&a[j], &a[j - 1]);
}

void Swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void minus(char a[]){
    char temp[4];
    for(int i = 0; i <= 3; i++)
        temp[i] = a[3 - i];
    for(int i = 3; i >= 0; i--){
        if(a[i] < temp[i] && i > 0){
            int n = 1;
            while(a[i - n] == '0'){
                a[i - n] = '9';
                n++;
            }
            a[i - n] = char(int(a[i - n]) - 1);
            a[i] = char(int(a[i]) - int(temp[i]) + 10 + '0');
        }
        else
            a[i] = char(int(a[i]) - int(temp[i]) + '0');
    }
}