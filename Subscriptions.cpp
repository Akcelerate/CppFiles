#include<iostream>
using namespace std;
int main(){
    int T, N;
    float X, C;
    
    t:
    cout << "Enter the total no. of test cases being performed: ";
    cin >> T;
    if(T > 0 && T <= 1000){
        goto op;
    }else{
        cout << "\nInvalid entry; range[1, 1000]";
        goto t;
    }
    op: while(T > 0, T--){
        n:
        cout << "\nNumber of people in group: ";
        cin >> N;
        if(N > 0 && N <= 100){
            goto x;
        }else{
            cout << "\nInvalid entry; range[1, 100]";
            goto n;
        }
        x:
        cout << "\nCost of one subscription: ";
        cin >> X;
        if(X >= 1 && X <= 1000){
            goto y;
        }else{
            cout << "\nInvalid entry; range[1, 1000]";
            goto x;
        }
        y:
        if(N%6 == 0){
            C = N*X/6;
        }else{
            C = (N/6 + 1)*X;
        }
        cout << "\nTotal cost: ";
        cout << C << endl;
    }
}
