#include<iostream>
using namespace std;
int main(){
    int T, N, X;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 5000);
    
    while(T--){
        do{
            cout << "\nCards on table and cards facing up: ";
            cin >> N >> X;
        }while((N < 2 || N > 100) &&
               (X < 0 || X > N));
        
        cout << "\nMin. cards flipped: ";
        if(X < N - X){
            cout << X << endl;
        }else{
            cout << N - X << endl;
        }
    }
}
