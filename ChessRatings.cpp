#include<iostream>
using namespace std;
int main(){
    int T, X, Y;
    int p;

    cout << "\nTest cases: ";
    cin >> T;
    
    while(T--){
        cout << "\nPresent Rating: ";
        cin >> X;
        cout << "\nTarget Rating: ";
        cin >> Y;
        
        p = (Y-X)/8;

        cout << "\nMin. wins needed: ";
        if(X >= Y){
            cout << 0 << endl;
        }else if((Y-X)%8 == 0){
            cout << p << endl;
        }else{
            cout << p + 1 << endl;
        }
    }
}
