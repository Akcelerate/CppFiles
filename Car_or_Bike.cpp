{
    int T, X, Y;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T < 0, T--){
        do{
            cout << "\nTravel time with bike: ";
            cin >> X;
        }while(X < 1 || X > 10);
        do{
            cout << "\nTime taken by car: ";
            cin >> Y;
        }while(Y < 1 || Y > 10);
        if(X == Y){
            cout << endl << "SAME";
        }else if(X < Y){
            cout << endl << "BIKE";
        }else{
            cout << endl << "CAR";
        }
    }
}
