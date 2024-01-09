#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile liczb w tablicy?" << endl; cin >> ile;

    int *tablica;               //deklarujemy wskaznik typu int tablica
    tablica = new int [ile];    //od tego miejsca w pamieci rezerwujemy zadan� ilo�� int�w (zmienna ile)

    for (int i=0; i<ile; i++)   //wy�wietlanie adres�w zawartych we wskaznikach
    {
        cout << tablica << endl;    //wyswietlanie szesnastkowe
        tablica++;
    }

    cout << endl;

    for (int i=0; i<ile; i++)   //wy�wietlanie oryginalnych wartosci zmiennych na kt�re pokazuja wskazniki
    {
        cout << *tablica << endl;
        *tablica++;
    }

    delete [] tablica;          //usuwamy tablice, zwalniamy pamiec, zostaje tylko wskaznik
    return 0;
}
