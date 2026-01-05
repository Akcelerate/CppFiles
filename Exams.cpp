#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T, X, Y;
    float Z, A;
    t:
    cout << "Test cases: ";
    cin >> T;
    if(T > 0 && T < 2*(pow(10, 4))){
        goto op;
    }else{
        goto t;
    }
    
    op:
    while(T > 0, T--){
        x:
        cout << "\nNo. of schools in Cleavland: ";
        cin >> X;
        if(X > 0 && X < 6){
            goto y;
        }else{
            goto x;
        }
        y:
        cout << "\nNo. of students per school: ";
        cin >> Y;
        if(Y > 0 && Y < 51){
            goto z;
        }else{
            goto y;
        }
        z:
        cout << "No. of students who passed in Cleavland: ";
        cin >> Z;
        if(Z >= 0 && Z <= X*Y){
            goto a;
        }else{
            goto z;
        }
        
        a:
        A = Z/(X*Y);
        if(A > 0.5){
            cout << "\nYes";
        }else{
            cout << "\nNo";
        }
    }
}
