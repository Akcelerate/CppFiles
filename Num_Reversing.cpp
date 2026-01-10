#include<iostream>
using namespace std;
int main(){
    int T, N;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T--){
        do{
            cout << "\nInteger: ";
            cin >> N;
        }while(N < 1 || N > 1000000);
        
        int n = 0;
        while(N > 0){
            n = n*10 + N%10;
            N /= 10;
        }
        
        cout << "\nReversed integer: ";
        cout << n << endl;
    }
}
