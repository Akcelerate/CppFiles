#include<iostream>
using namespace std;
int main(){
    int T, N;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T > 0, T--){
        do{
            cout << "\nPulp recieved(kg): ";
            cin >> N;
        }while(N < 1 || N > 100);
        
        cout << "\nNotebooks makeable: ";
        cout << N*10 << endl;
    }
}
