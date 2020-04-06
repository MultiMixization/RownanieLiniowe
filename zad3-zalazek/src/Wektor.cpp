#include "Wektor.hh"

Wektor::Wektor()
{
  tab[0]=0;
  tab[1]=0;
  tab[2]=0;
}

Wektor::Wektor(double xx, double yy, double zz)
{
  tab[0]=xx;
  tab[1]=yy;
  tab[2]=zz;
}

Wektor::Wektor(double *tablica)
{
  tab[0]=tablica[0];
  tab[1]=tablica[1];
  tab[2]=tablica[2];
}

double & Wektor::operator [](int index)
{
  if(index<0 || index >=ROZMIAR)
    {
      std::cerr << "Poza Zakresem." << std::endl;
      exit(1);
    }
  return tab[index];
}

Wektor Wektor::operator +(Wektor W2)
{
  Wektor temp;
  temp[0]=tab[0]+W2[0];
  temp[1]=tab[1]+W2[1];
  temp[2]=tab[2]+W2[2];
  return temp;
}

Wektor Wektor::operator -(Wektor W2)
{
  Wektor temp;
  temp[0]=tab[0]-W2[0];
  temp[1]=tab[1]-W2[1];
  temp[2]=tab[2]-W2[2];
  return temp;
}

double Wektor::operator *(Wektor W2)
{
  double wynik;
  wynik=tab[0]*W2[0]+tab[1]*W2[1]+tab[2]*W2[2];
  return wynik;
}

Wektor Wektor::operator *(double ls)
{
  Wektor temp;
  temp[0]=tab[0]*ls;
  temp[1]=tab[1]*ls;
  temp[2]=tab[2]*ls;
  return temp;
}

double Wektor::dlugosc()
{
  double dlg=0;
  dlg=sqrt(tab[0]+tab[1]+tab[2]);
  return dlg;
}

bool Wektor::operator ==(Wektor &W2)
{
  if(tab[0]==W2[0] && tab[1]==W2[1] && tab[2]==W2[2])
    {
      return 1;
    }
  return 0;
}

bool Wektor::operator !=(Wektor &W2)
{
  if(tab[0]!=W2[0] || tab[1]!=W2[1] || tab[2]!=W2[2])
    {
      return 1;
    }
  return 0;
}

std::istream &operator >> (std::istream &Strm, Wektor &Wek)
{
  Strm >> Wek[0] >> Wek[1] >> Wek[2];
  return Strm;
}

std::ostream &operator << (std::ostream &Strm, Wektor &Wek)
{
  Strm << Wek[0] << Wek[1] << Wek[2];
  return Strm;
}

Wektor operator *(double l1, Wektor &W2)
{
  Wektor temp;
  temp[0]=W2[0]*l1;
  temp[1]=W2[1]*l1;
  temp[2]=W2[2]*l1;
  return temp;
}
