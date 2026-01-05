#include<iostream>
using namespace std;
int main(){
    int T, X, Y;
    
    do{
        cout << "\nTest Cases: ";
        cin >> T;
    }while(T < 1 || T > 101);
    
    while(T > 0, T--){
        do{
            cout << "\nCRED coins per bill: ";
            cin >> X;
        }while(X < 1 || X > 1001);
        do{
            cout << "\nBills via CRED: ";
            cin >> Y;
        }while(Y < 1 || Y > 1001);
        cout << "\nCodeChef bags possible: ";
        cout << X*Y/100;
    }
}
