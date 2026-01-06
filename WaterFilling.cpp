#include<iostream>
using namespace std;

int main(){
    int T, B1, B2, B3;
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1001);
    
    while(T > 0, T--){
        do{
            cout << "\n\nEnter '0' if empty, '1' if not\nEnter status of each of the 3 bottles\n";
            cin >> B1 >> B2 >> B3;
        }while((B1 || B2 || B3) > 1 || (B1 || B2 || B3) < 0);
        if((B1&&B2) != 0 || (B2&&B3) != 0 || (B3&&B1) != 0){
            cout << "\nNot now";
        }else{
            cout << "\nWater filling time";
        }
  //if != is replace with == and the respective outputs are reversed, the intended result will not be obtained when any two var's == 1. why? 
    }
}
