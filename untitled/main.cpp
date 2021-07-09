#include <iostream>
#include <string> // for string variable
#include <fstream> // for create file with ID CARD

using namespace std;

string imie, nazwisko, miasto, dataurodzenia, kodpocztowy, pesel; // string variables

int main() {
    ofstream plik ("Dowod.txt");
    cout << "Witaj wypisz swoje dane aby stworzyc dowod osobisty" << endl;
    _sleep(2000);
    cout << "Imie: ";
    cin >> imie;
    cout << "Nazwisko: ";
    cin >> nazwisko;
    cout << "Data urodzenia: ";
    cin >> dataurodzenia;
    cout << "Miasto: ";
    cin >> miasto;
    cout << "Kod pocztowy: ";
    cin >> kodpocztowy;
    cout << "Numer Pesel: ";
    cin >> pesel;
    //

    cout << "Twoj dowod osobisty" <<endl;
    cout << "*******************************" << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data Urodzenia: " << dataurodzenia << endl;
    cout << "Miasto: " << miasto << endl;
    cout << "Kod pocztowy: " << kodpocztowy << endl;
    cout << "Numer Pesel: " << pesel << endl;
    cout << "*******************************";
    //
    plik << "*******************************" << endl;
    plik << imie << endl;
    plik << nazwisko <<endl;
    plik << dataurodzenia <<endl;
    plik << miasto << endl;
    plik << kodpocztowy << endl;
    plik << pesel << endl;
    plik << "*******************************" << endl;
    return 0;
}
