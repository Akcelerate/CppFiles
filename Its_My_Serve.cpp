#include<iostream>
using namespace std;
int main(){
    int T, P, Q;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nAlice Points: ";
        cin >> P;
        cout << "\nBob Points: ";
        cin >> Q;
        if(((P+Q)%4 == 0) || ((P+Q-1)%4 == 0)){
            cout << "\nAlice's Serve" << endl;
        }else{
            cout << "\nBob's Serve" << endl;
        }
    }
}
