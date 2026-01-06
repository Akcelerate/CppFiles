#include<iostream>
using namespace std;
int main(){
    int T, X;
    
    do{
        cout << "\nTest case: ";
        cin >> T;
    }while(T < 0 || T > 100);
    
    while(T > 0, T--){
        do{
            cout << "\nNet Price: ";
            cin >> X;
        }while(X < 0 || X > 10000);
        
        cout << "\nTotal Cost: ";
        if(X < 101){
            cout << endl << X;
        }else if(X > 100 && X < 1001){
            cout << endl << X - 25;
        }else if(X > 1000 && X < 5001){
            cout << endl << X - 100;
        }else{
            cout << endl << X - 500;
        }
    }
}
