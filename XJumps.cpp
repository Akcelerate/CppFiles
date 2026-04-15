#include<iostream>
using namespace std;
int main(){
    int T, X, Y;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout >> "Target Step: ";
        cin >> X;
        cout << "Steps Jumpable at once: ";  //Either jumps 'Y' or 1 step at a time
        cin >> Y;
        cout << "Moves taken to reach step" << X << ": " << X/Y + X%Y << endl;
    }
}
