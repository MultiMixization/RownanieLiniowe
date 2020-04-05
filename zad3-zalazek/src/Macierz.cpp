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

const Wektor & operator *(const Wektor &B)
{
}

double Wyznacznik()
{
}

const Macierz Macierz::operator +(const Macierz &B)
{
}

const Macierz Macierz::operator -(const Macierz &B)
{
}

const Macierz Macierz::operator *(const Macierz &B)
{
}

const Macierz Macierz::operator *(double B)
{
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

const Macierz & Macierz::operator[] (int index)
{
}
//double & operator[] (int index)
//{
//}

const Macierz & Macierz::operator() (int ind1, int ind2, int ind3)
{
}
//double & operator() (int ind1, ind2, ind3)
//{
//}

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
