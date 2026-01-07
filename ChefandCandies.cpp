#include<iostream>
using namespace std;
int main(){
    int T, N, X, V;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T > 0, T--){
        do{
            cout << "\nNo. of Children: ";
            cin >> N;
        }while(N < 1 || N > 100);
        do{
            cout << "\nNo. of candies present: ";
            cin >> X;
        }while(X < 1 || X > 100);
       cout << "\nNo. of packets of 4 needed: ";
        V = N - X;
        if(X > N){
            cout << endl << 0;
        }else if(V%4 == 0){
            cout << endl << V/4;
        }else{
            cout << endl << (V/4) + 1;
        }
    }
}
