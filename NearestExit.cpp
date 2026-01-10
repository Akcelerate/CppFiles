#include<iostream>
using namespace std;
int main(){
    int T, X;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T > 0, T--){
        do{
            cout << "\nSeat no.: ";
            cin >> X;
        }while(X < 1 || X > 100);
        
        if(X > 50){
            cout << "\nRight";
        }else{
            cout << "\nLeft";
        }
    }
}
