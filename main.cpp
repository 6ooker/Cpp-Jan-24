#include <iostream>

using namespace std;


void hoppla(){
    for(int i = 0; i <= 100; i++) {
        if(i % 7 == 0 || i % 10 == 7) {
            cout << "hoppla\n";
        }
        else {
            cout << i << endl;
        }
    }
}



int ggt(int a, int b) {
    int rest = b;

    while (rest != 0) {
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

void hauptmenu(){
    int a, b, input;
    while(1) {
        cout << "Programm straten? [1] für Ja\n";
        cin >> input;
        if(input == 1) {
            cout << "Geben sie eine erste Zahl ein:\n";
            cin >> a;
            cout << "Geben sie eine zweite Zahl ein:\n";
            cin >> b;
            int ergebnis = ggt(a, b);
            cout << "Der GGT ist: " << ergebnis << endl;
        }
        else {
            break;
        }
    }
}

int main() {

    hauptmenu();


    return 0;
}