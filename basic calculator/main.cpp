#include <iostream>


using namespace std;

void dodawanie(int suma) // addition
{
    int a,b, wynik;

    cout << "Pierwsza liczba: ";
    cin >> a;
    cout << "Druga liczba: ";
    cin >> b;
    wynik = a + b;
    cout << "Wynik = " << wynik;

}
void odejmowanie(int roznica) // subtraction
{
    int a,b, wynik;
    cout << "Pierwsza liczba: ";
    cin >> a;
    cout << "Druga liczba: ";
    cin >> b;
    wynik = a - b;
    cout << "Wynik = " << wynik;

}
void mnozenie(int iloczyn) // multiplication
{
    int a, b, wynik;
    cout << "Pierwsza liczba: ";
    cin >> a;
    cout << "Druga liczba: ";
    cin >> b;
    wynik = a * b;
    cout << "Wynik = " << wynik;

}
void dzielenie(int iloraz) // division
{
    int a, b, wynik;
    cout << "Pierwsza liczba: ";
    cin >> a;
    b:
    cout << "Druga liczba: ";
    cin >> b;
    if ( b == 0 )
    {
        cout << "Nie wolno dzielic przez zero." <<endl; //  cannot be divided by 0
        goto b;
    }
    wynik = a / b;
    cout << "Wynik = " << wynik;
}

int main() // Main Menu
{
    menu:
    int opcja = 0;
    cout << "[1]Dodawanie" << endl;
    cout << "[2]Odejmowanie" << endl;
    cout << "[3]Mnozenie" << endl;
    cout << "[4]Dzielenie" << endl;
    cout << "Wybierz opcje: ";
    cin >> opcja;
        switch (opcja) {
                case 1:
                    int suma;
                    dodawanie(suma);
                    break;
                case 2:
                    int roznica;
                    odejmowanie(roznica);
                    break;
                case 3:
                    int iloczyn;
                    mnozenie(iloczyn);
                    break;
                case 4:
                    int iloraz;
                    dzielenie(iloraz);
                    break;
                default:
                    cout << "Zly wybor" << endl; // valid option
                    goto menu;
        }
    return 0;
}
