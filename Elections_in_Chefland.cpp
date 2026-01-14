#include<iostream>
using namespace std;
int main(){
    int T, N, X;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 200);
    
    while(T--){
        do{
            cout << "\nPopulation of Chefland: ";
            cin >> N;
        }while(N < 1 || N > 100);
        do{
            cout << "\nMin. voting age: ";
            cin >> X;
        }while(X < 1 || X > 100);
        
        int const n = N;
        int A[n];
        int p = 0;
        for(int i = 0; i < n; i++){
            do{
                cout << "\nAge of " << i+1 << "th person: ";
                cin >> A[i];
            }while(A[i] < 1 || A[i] > 100);
            if(A[i] >= X){
                p++;
            }else{}
        }
        
        cout << "\nTotal eligible population: ";
        cout << p << endl;
    }
}
