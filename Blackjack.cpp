#include<iostream>
using namespace std;
int main(){
    int T, A, B;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nFirst Number: ";
        cin >> A 
        cout << "\nSecond Number: ";
        cin >> B;
        cout << endl;
        if(21 - A - B < 11 && 21 - A - B > 0){
            cout << "Number needed: " << 21 - A - B << endl;
        }else{
            cout << -1 << "\nYou cannot win" << endl;
        }
    }
}
