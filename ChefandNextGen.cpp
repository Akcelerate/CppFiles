#include<iostream>
using namespace std;
int main(){
    int T, A, B;
    float X, Y;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T > 0, T--){
        do{
            cout << "\nPower output expected per year: ";
            cin >> A;
        }while(A < 1 || A > 1000);
        do{
            cout << "\nTime (yrs): ";
            cin >> B;
        }while(B < 1 || B > 1000);
        do{
            cout << "\nTotal Helium on moon: ";
            cin >> X;
        }while(X < 1 || X > 1000);
        do{
            cout << "\nPower obtaineable per gram of Helium: ";
            cin >> Y;
        }while(Y < 1 || Y > 1000);
        if(A*B > X*Y){
            cout << endl << "No";
        }else{
            cout << endl << "Yes";
        }
    }
}
