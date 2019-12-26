#include <iostream>

int Test(char *a, char *b);
char Sort(int *a);

int main(){
    int time;
    char a, b;
    int win[3] = {0};
    int hand1[10] = {0};
    int hand2[10] = {0};
    std::cin >> time;
    for(int i = 0; i < time; i++){
        std::cin >> a >> b;
        int temp = Test(&a, &b);
        if(temp == 1){
            win[1]++;
            hand1[a - 'A']++; 
        }
        else
            if(temp == 2){
                win[2]++;
                hand2[b - 'A']++; 
            }
        else
            win[0]++;
    }
    std::cout << win[1] << ' ' << win[0] << ' ' << win[2] << std::endl;
    std::cout << win[2] << ' ' << win[0] << ' ' << win[1] << std::endl;
    std::cout << Sort(hand1) << ' ' << Sort(hand2);
    return 0;
}

int Test(char *a, char *b){
    int k = 0;
    switch(*a){
        case 'C':
            switch(*b){
                case 'J':
                    k = 1;
                    break;
                case 'B':
                    k = 2;
                    break;
            }
            break;
        case 'B':
            switch(*b){
                case 'J':
                    k = 2;
                    break;
                case 'C':
                    k = 1;
                    break;
            }
            break;
        case 'J':
            switch(*b){
                case 'B':
                    k = 1;
                    break;
                case 'C':
                    k = 2;
                    break;
            }
            break;
    }
    return k;
}

char Sort(int *a){
    char max;
    if(a['C' - 'A'] > a['B' - 'A'])
        max = 'C';
    else
        max = 'B';
    if(a['J' - 'A'] > a['C' - 'A'] && a['J' - 'A'] > a['B' - 'A'])
        max = 'J';
    return max;
}