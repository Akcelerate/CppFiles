#include<iostream>
using namespace std;
int main(){
    int T, N, X;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T > 0, T--){
        do{
            cout << "\nPeople: ";
            cin >> N;
        }while(N < 1 || N > 10);
        do{
            cout << "\nSlices per person: ";
            cin >> X;
        }while(X < 1 || X > 10);
        cout << "\nMin. pizzas needed: ";
        int P = N*X;
        if(P%4 == 0){
            cout << P/4;
        }else{
            cout << (P/4) + 1;
        }
    }
