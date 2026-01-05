#include<iostream>
using namespace std;
int main(){
    int T, X, Y;
    
    t:
    cout << "Test cases: ";
    cin >> T;
    if(T > 0 && T < 101){
        goto op;
    }else{
        cout << "\nInvalid entry\n";
        goto t;
    }
    
    op:
    while(T > 0 , T--){
        x:
        cout << "\nWork hours on normal day[M-F]";
        cin >> X;
        if(X > 1 && X < 13){
            goto y;
        }else{
            cout << "\nInvalid entry\n";
            goto x;
        }
        y:
        cout << "\nWork hours on CHILL DAY: ";
        cin >> Y;
        if(Y > 0 && Y < X){
            goto a;
        }else{
            cout << "\nInvalid entry\n";
            goto y;
        }
        
        a:
        cout << endl << 4*X + Y;
    }
}
