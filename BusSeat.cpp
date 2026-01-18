#include<iostream>
using namespace std;
int main(){
    int T, N;
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nSeat No.: ";
            cin >> N;
        }while(N < 1 || N > 30);
        
        cout << "\nSeat Type: ";
        if(N < 11){
            cout << "Lower Double" << endl;
        }else if(N > 10 && N < 16){
            cout << "Lower Single" << endl;
        }else if(N > 15 && N < 26){
            cout << "Upper Double" << endl;
        }else{
            cout << "Upper Single" << endl;
        }
    }
}
