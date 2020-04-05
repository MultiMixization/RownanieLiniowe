#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"
#include "Wektor.hh"

class UkladRownanLiniowych {
  Macierz A;
  Wektor B;
public:
  UkladRownanLiniowych();
  UkladRownanLiniowych(const Macierz & A, const Wektor & B);
  const Wektor & ZwrocWektorWolny();
  void ZmienWektorWolny(const Wektor & W);
  const Wektor & Rozwiaz();
};

std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);
std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRown);


#endif
