#include<iostream>
using namespace std;
int main(){
    int T, N, K, M;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nCandies Total: ";
        cin >> N;
        cout << "\nPockets Per Bag: ";
        cin >> K;
        cout << "\nCandies Per Pocket: ";
        cin >> M;
        cout << "\nBags needed: ";
        if(N%(K*M) == 0){
            cout << N/(K*M) << endl;
        }else{
            cout << (N/(K*M)) + 1 << endl;
        }
    }
}
