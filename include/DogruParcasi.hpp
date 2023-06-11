#ifndef DogruParcasi_hpp
#include "Nokta.hpp"
#include <cmath>
#define DogruParcasi_hpp
class DogruParcasi
{
public: Nokta nokta1;
public: Nokta nokta2;
public: int uzunluk;
public:DogruParcasi(Nokta _nokta1, Nokta _nokta2);
public :int uzunlugumuHesapla();

};
#endif
