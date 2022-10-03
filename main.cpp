#include <iostream>

using namespace std;

void PrimosOMultiplos(int a){
    for(int i{0}; i <= a; ++i){
        if(i ==2){
            cout << i << endl;
        }else if(i == 3){
            cout << i << endl;
        }else if(i == 5){
            cout << i << endl;
        }else if(i == 7){
            cout << i << endl;
        }else if(((i%2 != 0)&&(i%3 != 0)&&(i%5 != 0)&&(i%7 != 0))||(i%10 == 0)){
            cout << i << endl;
        }
    }
}

void PrimosOMultiplos2(int a){
    if(a ==2){
        cout << a << endl;
        cout << 1 <<endl;
    }else if(a == 3){
        cout << a << endl;
        PrimosOMultiplos2(a-1);
    }else if(a == 5){
        cout << a << endl;
        PrimosOMultiplos2(a-1);
    }else if(a == 7){
        cout << a << endl;
        PrimosOMultiplos2(a-1);
    }else if(((a%2 != 0)&&(a%3 != 0)&&(a%5 != 0)&&(a%7 != 0))||(a%10 == 0)){
        cout << a << endl;
        PrimosOMultiplos2(a-1);
    }else{
        PrimosOMultiplos2(a-1);
    }
}

int main(){
    PrimosOMultiplos(100);
    PrimosOMultiplos2(100);
}