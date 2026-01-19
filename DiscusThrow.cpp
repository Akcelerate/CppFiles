#include<iostream>
using namespace std;
int main(){
    int T, A, B, C, g;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nEnter all sscores: ";
            cin >> A >> B >> C;
        }while((A < 1 || A > 100) &&
               (B < 1 || B > 100) &&
               (C < 1 || C > 100));
        
        cout << "\nFinal Score: ";
        if(A > B){
            g = A;
        }else{
            g = B;
        }
        if(g < C){
            g = C;
        }else{}
        cout << g << endl;
    }
}
