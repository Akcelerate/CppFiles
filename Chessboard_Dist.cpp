#include<iostream>
using namespace std;

int max(int a, int b){
    if(a < 0){
        a *= -1;
    }else{}
    if(b < 0){
        b *= -1;
    }else{}
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int T, X1, X2, Y1, Y2;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nEnter First Coordinates: ";
        cin >> X1 >> Y1;
        cout << "\nSecond Coordinates: ";
        cin >> X2 >> Y2;
        cout << max((X1 - X2), (Y1 - Y2)) << endl;  //Distance = max(|X1 - X2|, |Y1 - Y2|)
    }
}
