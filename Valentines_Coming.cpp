#include<iostream> 
using namespace std;
int main(){
    int T, X, Y;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "Amount in hand: ";
        cin >> X;
        cout << "Cost Per Chocolate: ";
        cin >> Y;
        cout << "Chocolates Buyable: " << X/Y << endl;
    }
}
