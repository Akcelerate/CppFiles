#include<iostream>
using namespace std;
int main(){
    int T, N, M;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        int T, N, M;
        
        do{
            cout << "\nTest cases: ";
            cin >> T;
        }while(T < 1 || T > 100);
        
        while(T--){
            do{
                cout << "\nNo. of friends: ";
                cin >> N;
            }while(N < 1 || N > 100);
            do{
                cout << "\nNo. of 'left' shoes: ";
                cin >> M;
            }while(M < 1 || M > 100);
            
            cout << "No. of 'single' shoes to buy: ";
            if(N > M){
                cout << 2*N - M << endl;
            }else{
                cout << N << endl;
            }
        }
    }
}
