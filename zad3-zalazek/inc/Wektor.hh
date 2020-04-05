#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>
#include <cmath>

class Wektor {
  double tab[ROZMIAR];
public:
  Wektor();
  Wektor(double xx, double yy, double zz);
  Wektor(double *tablica);

  double & operator [](int index);
  
  const Wektor operator +(Wektor &W2);
  const Wektor operator -(Wektor &W2);
  double operator *(Wektor &W2);
  const Wektor operator *(double l2);

  double dlugosc();

  bool operator ==(Wektor &W2);
  bool operator !=(Wektor &W2);
};

std::istream& operator >> (std::istream &Strm, Wektor &Wek);
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

Wektor operator *(double l1, Wektor &W2);

#endif
