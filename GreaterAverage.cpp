#include<iostream>
using namespace std;
int main(){
    int T, A, C;
    float D, B;
    
  cout << "Enter total no. of test cases being performed\n";
    tests: cin >> T;
    if(T > 0 && T <= 1000){
        goto op;
    }
    else{
        cout << "Invalid num; test cases:[1, 1000]";
        goto tests;
    }
    
    op: while(T > 0, T--){
           cout << "Enter the two integers to be avaraged\n";
            a: cin >> A;
            if(A > 0 && A <= 10){
                goto b;
            }else{
                cout << "Invalid num; value:[1, 10]";
                goto a;
            }
            b: cin >> B;
            if(B >= 1 && B <= 10){
                goto c;
            }else{
                cout << "Invalid num; value:[1, 10]";
                goto b;
            }
            cout << "Enter integer to be compared to average";
            c: cin >> C;
            if(C > 0 && C <= 10){
                D = (A+B)/2;
                goto d;
            }else{
              cout << "Invalid num; value:[1, 10]";
                goto c;
            }
            d: if(D > C){
                cout << "yes\n";
            }
            else{
                cout << "no\n";
            }
        }
}
