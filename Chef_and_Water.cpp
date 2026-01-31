#include<iostream>
using namespace std;
int main(){
    int T, N, X, K;

    cout << "\nTest Cases: ";
    cin >> T;
    
    while(T--){
        cout << "\nNo. of Bottles: ";
        cin >> N;
        cout << "\nBottle Capacity: ";
        cin >> X;
        cout << "\nTanker Capacity: ";
        cin >> K;
        cout << "\nMax. bottles filled: ";
        K = K/X;
        if(N > K){
            cout << K << endl;
        }else{
            cout << N << endl;
        }
    }
}
