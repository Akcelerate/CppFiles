#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T, X;
    float Y;
    int P = pow(10, 6);
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T > 0, T--){
        do{
            cout << "\nSubmitted: ";
            cin >> X;
        }while(X < 1 || X > P);
        do{
            cout << "\nApproved";
            cin >> Y;
        }while(Y < 1 || Y > P);
        if(Y/X >= 0.5){
            cout << "\nYes";
        }else{
            cout << "\nNo";
        }
    }
}
