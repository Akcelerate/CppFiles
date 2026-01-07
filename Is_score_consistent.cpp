        do{
            cout << "\nPossible total goals by A: ";
            cin >> C;
        }while(C < 1 || C > 10);
        do{
            cout << "\nPossible goals by team B: ";
            cin >> D;
        }while(D < 1 || D > 10);
        if(A > C || B > D){
            cout << "IMPOSSIBLE" << endl;
        }else{
            cout << "POSSIBLE" << endl;
        }
    }
}
