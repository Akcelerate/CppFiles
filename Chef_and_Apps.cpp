#include<iostream>
using namespace std;
int main(){
    int T, S, X, Y, Z;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nTotal Storage Space: ";
        cin >> S;
        cout << "\nSize of 1st 2 Apps: ";
        cin >> X >> Y;
        cout << "\nSize of 3rd App: ";
        cin >> Z;
        cout << "\nApps to be DELETED for Download: ";
        if(Z > S-X-Y){
            if((X+Z > S) && (Y+Z > S)){
                cout << 2 << endl;
            }else{
                cout << 1 << endl;
            }
        }else{
            cout << 0 << endl;
        }
    }
}
