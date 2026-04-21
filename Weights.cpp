#include<iostream>
using namespace std;

void factorial_tester(){
  System("./Factorial.cpp");  //How on earth ndo I integrate my Factorial.cpp into this code
}

int factorial(){
  return (n <= 1) ? 1 : n * factorial(n - 1);
}

void balance(int w, int[] weights){
  //in cpp, array is not an object as in java, but a contiguous block of memory
  #include<cmath>
  int s = sizeof(weights) / sizeof(weights[0]);    //sizeof(a) gives the total memory allocated to the array a
                                      //dividing total memory allocated to array by the memory of a single unit/index will give the no. of elements in it
  for(int i = 0; i < s; i++){
    for(int k = 0; k < 
  }
}

int main(){
    int T, W, X, Y, Z;

    cout << "Test Cases: ";
    cin >> T;
    while(T--){
        cout << "\nOject Weight: ";
        cin >> W;
        cout << "\nWeights in hand: ";
        cin >> X >> Y >> Z;
        cout << "\nAttaniability of object weight using weights in hand: ";
        if((W==X) || (W==Y) || (W==Z) || (W == X+Y) || (W==X+Z) || (W==Y+Z) || (W == X+Y+Z)){
            cout << "\nYes" << endl;
        }else{
            cout << "\nNo" << endl;
        }
    }
}
