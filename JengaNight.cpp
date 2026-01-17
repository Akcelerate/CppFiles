#include<iostream>
using namespace std;
int main(){
    int T, N, X;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 10000);
    
    while(T--){
        do{
            cout << "\nNo. of People: ";
            cin >> N;
        }while(N < 1 || N > 1000);
        do{
            cout << "\nNo. of Jenga tiles: ";
            cin >> X;
        }while(X < 1 || X > 1000);
        
        for(int i = 0; i*N <= X; i++){
            if(i*N == X){
                cout << "\nYes";
            }else if((i+1)*N > X){
                cout << "\nNo";
            }else{}
        }
    }
}
