#include<iostream>
using namespace std;
int main(){
    int T, A, B, C, D;
    
    do{
//        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T > 0, T--){
        do{
//            cout << "\nGoals by team A: ";
            cin >> A;
        }while(A < 0 || A > 10);
        do{
//            cout << "\nGoals by tem B: ";
            cin >> B;
        }while(B < 0 || B > 10);
        do{
//            cout << "\nPossible total goals by A: ";
            cin >> C;
        }while(C < 0 || C > 10);
        do{
//            cout << "\nPossible goals by team B: ";
            cin >> D;
        }while(D < 0 || D > 10);
        if(A > C || B > D){
            cout << endl << "IMPOSSIBLE";
        }else{
            cout << endl << "POSSIBLE";
        }
    }
}
