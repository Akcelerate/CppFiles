#include<iostream>
using namespace std;
int main(){
    int T, N, X, Y;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nNo. of problems: ";
            cin >> N;
        }while(N < 1 || N > 10);
        
        do{
            cout << "\nMarks recievable (apart from 0): ";
            cin >> X;
        }while(X < 1 || X > 10);
        
        do{
            cout << "\nTarget: ";
            cin >> Y;
        }while(Y < 0 || Y > N*X);

        cout << "\nTarget achievable: ";
        for(int i = 0; i <= N; i++){
            if(X*i == Y){
                cout << "Yes" << endl;
                break;
            }else if(i == N){
                cout << "No" << endl;
            }else{}
        }
    }
}
