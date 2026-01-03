#include<iostream>
using namespace std;
int main(){
    int T, X;
    
    t:
    cout << "Total no. of test cases being performed: ";
    cin >> T;
    if(T > 0 && T <= 10){
        goto op;
    }else{
        cout << "\nInvalid input; range[1, 10]\n";
        goto t;
    }
    
    op:
    while(T > 0, T--){
        x:
        cout << "\nStart time:  pm\b\b";
        cin >> X;
        cout << endl;
        if(X > 0 && X <= 9){
            goto p;
        }else{
            cout << "\nInvalid input; range[1, 9]\n";
            goto x;
        }
        p:
        if((10 - X) < 3){
            cout << "no";
        }else{
            cout << "yes";
        }
    }
    
}
