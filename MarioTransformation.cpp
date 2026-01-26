#include<iostream>
using namespace std;
int main(){
    int T, X;
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nMushrooms eaten: ";
            cin >> X;
        }while(X < 1 || X > 100);
        
        cout << "\nCurrent size: ";
        if(X%3 == 0){
            cout << "NORMAL" << endl;
        }else if(X%3 == 1){
            cout << "HUGE" << endl;
        }else{
            cout << "SMALL" << endl;
        }
    }
}
