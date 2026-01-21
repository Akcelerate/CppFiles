#include<iostream>
using namespace std;
int main(){
    int X, Y;
    do{
        cout << "\nMovie length: ";
        cin >> X;
    }while(X < 1 || X > 1000);
    do{
        cout << "\nMinutes of movies watched twice the speed: ";
        cin >> Y;
    }while((Y < 1 || Y > 1000) &&
           ((Y&&1) == 0));
    
    cout << "\nTotal minutes spent watching: ";
    cout << X - (Y/2) << endl;
}
