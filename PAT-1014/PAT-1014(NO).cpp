#include <iostream>
#include <cctype>

void Day(char a);
void Minute(int a);

int main(){
    int count1[26] = {0};
    char temp;
    int k = 0, j = 0;
    char Result1, Result2;
    int Result3;
    while(k != 2){
        temp = getchar();
        if(temp >= 'A' && temp <= 'Z' && !j)
            if(++count1[int(temp - 'A')] == 2){
                Result1 = temp;
                j++;
            }
        if(temp >= 'A' && temp <= 'Z' && j == 1)
            if(++count1[int(temp - 'A')] == 2){
                Result2 = temp;
                j++;
            }
        if(temp == '\n')
            k++;
    }
    int count2[52] = {0};
    for (int i = 0; ; i++)
    {
        temp = getchar();
        if(islower(temp))
            if(++count2[int(temp - 'a')] == 2){
                Result3 = i;
                break;
            }
               
        if(isupper(temp))
            if(++count2[int(temp - 'A')] == 2){
                Result3 = i;
                break;
            }
    }
    Day(Result1);
    std::cout << int(Result2 - 'A') + 10 << ':';
    Minute(Result3);
    return 0;
}

void Day(char a){
    switch (a){
    case 'A':
        std::cout << "MON ";
        break;
    case 'B':
        std::cout << "TUE ";
        break;
    case 'C':
        std::cout << "WEN ";
        break;
    case 'D':
        std::cout << "THU ";
        break;
    case 'E':
        std::cout << "FRI ";
        break;
    case 'F':
        std::cout << "SAT ";
        break;
    case 'G':
        std::cout << "SUN ";
    }
}

void Minute(int a){
    if(a < 10)
        std::cout << "0" << a;
    else
        std::cout << a;
}