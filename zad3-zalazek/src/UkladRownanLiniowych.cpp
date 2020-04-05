#include "UkladRownanLiniowych.hh"

UkladRownanLiniowych::UkladRownanLiniowych()
{
  Macierz temp1;
  Wektor temp2;
  A=temp1;
  B=temp2;
}

UkladRownanLiniowych::UkladRownanLiniowych(const Macierz &Am, const Wektor &Bw)
{
  A=Am;
  B=Bw;
}

const Wektor & ZwrocWektorWolny()
{
}

void ZmienWektorWolny(const Wektor &W)
{
}

const Wektor & Rozwiaz()
{
}

std::istream & operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)
{
}

std::ostream & operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRown)
{
}
