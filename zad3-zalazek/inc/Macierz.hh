#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include <iostream>
#include "Wektor.hh"

class Macierz {
  Wektor tab[ROZMIAR];
public:
  Macierz();
  Macierz(double tablica[]);
  Macierz(Wektor tablica[]);
  Macierz(Wektor A, Wektor B, Wektor C);
  Macierz(int jednostkowa);

  Wektor & operator [] (int index);

  Macierz & operator () (int ind1, int ind2, int ind3);

  double wyznacznik();

  const Macierz operator +(const Macierz &B);
  const Macierz operator -(const Macierz &B);
  const Macierz operator *(const Macierz &B);
  const Macierz operator *(double B);

  bool operator ==(const Macierz &W2) const;
  bool operator !=(const Macierz &W2) const;

  const Macierz & transponuj() const;

  const Macierz & odwroc() const;
};

std::istream& operator >> (std::istream &Strm, Macierz &Mac);
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);

const Macierz & operator *(double l, const Macierz M);

Macierz MacJednostkowa();


#endif
