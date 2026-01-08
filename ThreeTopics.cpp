#include<iostream>
using namespace std;
int main(){
    int A, B, C, X;
    do{
        cout << "\nEnter the prepared topics and then the one given\n";
        cin >> A >> B >> C >> X;
    }while((A < 1 || A > 10) && 
           (B < 1 || B > 10) &&
           (C < 1 || C > 10) &&
           (X < 1 || X > 10));
    
    if(X == A || X == B || X == C){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
