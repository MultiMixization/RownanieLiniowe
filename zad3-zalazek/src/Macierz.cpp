#include "Macierz.hh"

Macierz::Macierz()
{
  Wektor temp;
  for(int i=0;i<ROZMIAR;i++)
    {
      tab[i]=temp;
    }
}

Macierz::Macierz(double tablica[])
{
  int pom=0;
  Wektor temp;
  for(int i=0;i<ROZMIAR;i++)
    {
      temp[0]=tablica[pom];
      temp[1]=tablica[pom+1];
      temp[2]=tablica[pom+2];
      tab[i]=temp;
      pom=pom+3;
    }
}

Macierz::Macierz(Wektor tablica[])
{
  for(int i=0;i<ROZMIAR;i++)
    {
      tab[i]=tablica[i];
    }
}

Macierz::Macierz(Wektor A, Wektor B, Wektor C)
{
  tab[0]=A;
  tab[1]=B;
  tab[2]=C;
}

Macierz::Macierz(int jednostkowa)
{
  Wektor jednostkowy(1,1,1);
  for(int i=0;i<ROZMIAR;i++)
    {
      tab[i]=jednostkowy;
    }
}

Wektor & Macierz::operator [] (int index)
{
  return tab[index];
}

Macierz & Macierz::operator () (int ind1, int ind2, int ind3)
{
}

double Macierz::Wyznacznik() //Sarrus
{
  double wynik;
  wynik=-tab[2][0]*tab[1][1]*tab[0][2]-tab[2][1]*tab[1][2]*tab[0][0]-tab[2][2]*tab[1][0]*tab[2][3]+tab[0][0]*tab[1][1]*tab[2][2]+tab[0][1]*tab[1][2]*tab[2][0]+tab[0][2]*tab[1][0]*tab[2][1];
  return wynik;
}

const Macierz Macierz::operator +(const Macierz &B)
{
  Macierz wynik;
  for(int i=0;i<ROZMIAR;i++)
    {
      wynik[i]=tab[i]+B[i];
    }
  return wynik;
}

const Macierz Macierz::operator -(const Macierz &B)
{
  Macierz wynik;
  for(int i=0;i<ROZMIAR;i++)
    {
      wynik[i]=tab[i]-B[i];
    }
  return wynik;
}

const Macierz Macierz::operator *(const Macierz &B)
{
}

const Macierz Macierz::operator *(double B)
{
  Macierz wynik;
  for(int i=0;i<ROZMIAR;i++)
    {
      wynik[i]=tab[i]*B;
    }
  return wynik;
}

bool Macierz::operator ==(const Macierz &W2) const
{
  if(tab[0]==W2.tab[0] && tab[1]==W2.tab[1] && tab[2]==W2.tab[2])
    {
      return 1;
    }
  return 0;
}

bool Macierz::operator !=(const Macierz &W2) const
{
  if(tab[0]!=W2.tab[1] || tab[1]!=W2.tab[1] || tab[2]!=W2.tab[2])
    {
      return 1;
    }
  return 0;
}

const Macierz & transponuj()
{
}

const Macierz & odwroc()
{
}

std::istream& operator >> (std::istream &Strm, Macierz &Mac)
{
}

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
{
}

const Macierz & operator *(double l, const Macierz M)
{
}

Macierz MacJednostkowa()
{
}
