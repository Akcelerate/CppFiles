//Check if every friend gets an equal and even number of chocolates

#include<iostream>
using namespace std;
int main(){
    int T, N, M;

    cout << "Test Cases: "; 
    cin >> T;
    while(T--){
        cout << "Candies: ";
        cin >> N;
        cout << "Friends: ";
        cin >> M;
        if((N%M == 0) && ((N/M)%2 == 0)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}
