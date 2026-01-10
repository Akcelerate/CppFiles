#include<iostream>
using namespace std;
int main(){
    int T, A, B, C;
    
    do{
        //cout << "Test cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T > 0, T--){
        do{
            //cout << "\nTemp. demand of each person\n";
            cin >> A >> B >> C;
        }while((A < 1 || A > 100) ||
               (B < 1 || B > 100) ||
               (C < 1 || C > 100));
        if(B < A || B < C){
            cout << endl << "No";
        }else{
            cout << endl << "Yes";
        }
    }
}
