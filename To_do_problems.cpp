#include<iostream>
using namespace std;
int main(){
    int T, N;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T > 0, T--){
        do{
            cout << "\nNo. of problems added: ";
            cin >> N;
        }while(N < 1 || N > 1000);
        
        const int n = N;
        int D[n];
        int p = 0;
        for(int i = 0; i < N; i++){
            cout << "\nRating of P" << i << ": ";
            cin >> D[i];
            if(D[i] < 1000){
                ;
            }else{
                p += 1;
            }
        }
        
        cout << "\nNo. of problems to be removed: "
        cout << endl << p;
    }
}
