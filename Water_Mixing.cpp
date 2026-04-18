#include<iostream>
using namespace std;
int main(){
    int T, A, B, X, Y;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\n(in degrees)";
        cout << "\nInitial Temp.: ";
        cin >> A;
        cout << "\nDesired Temp.: ";
        cin >> B;
        cout << "\n(in litres)";
        cout << "\nHot Water: ";
        cin >> X;
        cout << "\nCold Water: ";
        cin >> Y;
        cout << "\nAchievability of Desired Temp.: ";
        if((A == B) || ((A > B) && ((A - B) <= Y)) || ((A < B) && ((B - A) <= X))){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
