#include<iostream>
using namespace std;
int main(){
    int T, N;
    
    do{
        cout << "\nTest cases; ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T--){
        do{
            cout << "\nNo. of friends: ";
            cin >> N;
        }while(N < 2 || N > 1000);
        
        cout << "\nMin. No. of cars: ";
        if(N%4 == 0){
            cout << N/4 << endl;
        }else{
            cout << (N/4) + 1 << endl;
        }
    }
}
