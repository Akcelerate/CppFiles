#include<iostream>
using namespace std;
int main(){
    int T, X, Y, Z, F;
    
    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nLevels Remaining: "
        cin >> X; 
        cout << "\nTime Per Level: "
        cin >> Y 
        cout << "\nBreak Frequency: "  //After every 'F' levels a break is taken
        cin >> F
        cout << "\nBreak Time: "
        cin >> Z;
      
        if(X%F != 0){
            cout << X*Y + (X/F)*Z << endl;
    
        }
        else{
            cout << X*Y + (X-F)*Z/F << endl;
        }
    }
}
