#include <iostream>
#include <iomanip>

constexpr double PI = 3.14159265358979323846;
using namespace std;

//resets and clears cin stream
void reset_cin()
{
    cin.ignore(INT_MAX, '\n');
    cin.clear();
}


//zad1
struct Osoba
{
    string imie, nazwisko;
};


void zad1()
{
    Osoba osoby[3];
    for (int x = 0; x < 3; x++)
    {
        cout << "Podaj imie osoby [" << x << "] :";
        cin >> osoby[x].imie;
        cout << "Podaj nazwisko osoby [" << x << "] :";
        cin >> osoby[x].nazwisko;
    }

    //zapisywanie do talbicy dwuwymiarowej
    string osoby_tab[3][2];

    for (int x = 0; x < 3; x++)
    {
        osoby_tab[x][0] = osoby[x].imie;
        osoby_tab[x][1] = osoby[x].nazwisko;
    }

    cout << "Printowanie osob z tablicy dwuwymiarowej: \n\n";
    for (int x = 0; x < 3; x++)
    {
        cout << "Imie: " << osoby_tab[x][0] << "\n"
            << "Nazwisko: " << osoby_tab[x][1] << "\n";
    }
}

//zad 2
long long factorial(const int& number)
{
    if (number == 0)
        return 1;
    return number * factorial(number-1);
}

void zad2()
{
    int liczba = 0;
    cout << "Wpisz liczbe do obliczenia silni: ";
    cin >> liczba;
    if (!cin)
    {
        cout << "Wprowadzona wartosc nie jest liczba!";
        reset_cin();
        return;
    }

    long long wynik = factorial(liczba);
    cout << "!" << liczba << "=" << wynik<<"\n";

    if (wynik % 2 == 0)
        cout << "Wynik jest podzielny przez 2\n";
    if (wynik % 3 == 0)
        cout << "Wynik jest podzielny przez 3\n";
    if (wynik % 5 == 0)
        cout << "Wynik jest podzielny przez 5\n";
    if (wynik % 11 == 0)
        cout << "Wynik jest podzielny przez 11\n";
}

void zad3()
{
    double r = 0;
    cout << "Podaj promien kola: ";
    cin >> r;

    double pole = PI * r * r;
    double pola[10][10];

    for (int x = 0; x < 10; x++)
        for (int y = 0; y < 10; y++)
        {
            pola[x][y] = pole;
            pole += 3;
        }

    //wypisywanie pól

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            cout << pola[x][y]<<"\t";
        }
        cout << "\n";
    }
}

int main()
{
    //zad1();
    //zad2();
    //zad3();
}

