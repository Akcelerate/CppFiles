#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T, N;

    cout << "Test cases: ";
    cin >> T;
    while(T--){
        cout << "Integer: ";
        cin >> N;
        cout << "Square root(" << N << ") = " << int(pow(N, 0.5)) << endl;
    }
}
