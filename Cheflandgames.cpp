#include<iostream>
using namespace std;
int main(){
    int T;
    bool R1, R2, R3, R4;
    
    do{
//        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 20);
    
    while(T > 0, T--){

//        cout << "\n1: if in\n0:if out";
//        cout << "\nRef1: ";
        cin >> R1;
//        cout << "\nRef2: ";
        cin >> R2;
//        cout << "\nRef3: ";
        cin >> R3;
//        cout << "\nRef4: ";
        cin >> R4;
        if(R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0){
            cout << "\nIN";
        }else{
            cout << "\nOUT";
        }
    }
}
