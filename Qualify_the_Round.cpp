#include<iostream>
using namespace std;
int main(){
    int T, X, A, B;
    
    do{
        cout << "\nTest Cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nPoints needed: ";
            cin >> X;
        }while(X < 1 || X > 100);
        
        do{
            cout << "\nEasy Problems solved: ";
            cin >> A;
        }while(A < 0 || A > 100);
        
        do{
            cout << "\nHard Problems solved: ";
            cin >> B;
        }while(B < 0 || B > 100);
        
        if(A + 2*B < X){
            cout << "\nNotQualify";
        }else{
            cout << "\nQualify";
        }
    }
}
