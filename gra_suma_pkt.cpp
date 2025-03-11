#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double punkty;
    double sumapkt = 0;
    int poziom;

    // Pobranie liczby poziomow
    cout << "Podaj z ilu poziomow zsumowac punkty: " ;
    while (!(cin >> poziom) || poziom <= 0) {
        cout << "Bledne dane. Wprowadz liczbe calkowita wieksza od 0: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << endl; // Nowa linia (czytelnosc)

    // Pobranie punktow dla kazdego poziomu
    for (int i = 1; i <= poziom; i++) {
        cout << "Podaj punkty (0-10) z poziomu: " << i << ": ";

        while (!(cin >> punkty) || punkty < 0 || punkty > 10) {
            cout << "Bledne dane! Wprowadz liczbe z zakresu 0-10: "; 
            cin.clear();
            cin.ignore(1000, '\n');
        }

        sumapkt += punkty;
    }

    // Wynik koncowy
    cout << "\nZ " << poziom << " poziomow gry uzyskales " << sumapkt << " punktow." << endl;

    return 0;
}