#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

using namespace std;


int main()
{
  UkladRownanLiniowych Uklad;
  Wektor wynik;
  Wektor blad;
  
  cin >> Uklad;

  if(!cin.good())
    {
      cerr << "Blad wczytywania." << endl;
      exit(5);
    }
  
  cout << "---Rozwiazanie metoda Cramera---" << endl;
  //cout << "Wyznacznik glowny: " << Uklad.getmacierz().wyznacznik() << endl;
  wynik=Uklad.Rozwiaz();
  blad=Uklad.getmacierz()*wynik-Uklad.getwektor();
  cout << "Rozwiazanie x, y, z: " << wynik << endl;
  cout << "Wektor bledu: " << blad << endl;
  cout << "Dlg wektoru bledu: " << blad.dlugosc() << endl;
}
