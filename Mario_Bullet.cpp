//"https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET"
#include<iostream>
using namespace std;
int main(){
    int T, X, Y, Z;
    
    cout << "\nTest case: ";
    cin >> T;
    
    while(T--){
        cout << "\nBullet speed: ";
        cin >> X;
        cout << "\nDistance: ";
        cin >> Y;
        cout << "\nMin. ETA: ";
        cin >> Z;
        cout << "Min. wait time before shoot: ";
        if(Y/X >= Z){
            cout << 0 << endl;
        }else{
            cout << Z - Y/X << endl;
        }
    }
}
