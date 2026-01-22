#include<iostream>
using namespace std;
int main(){
    int T, X, Y;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T--){
        do{    
            cout << "\nLocation of police and thief: ";
            cin >> X >> Y;
        }while((X&&Y) < -100000 || (X&&Y) > 100000);
        
        cout << "\nTime taken to catch thief (sec): ";
        if(Y > X){    
            cout << Y - X << endl;
        }else{
            cout << X - Y << endl;
        }
    }
}
