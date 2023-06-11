/**
* @file Nokta.cpp dosyası
* @description Noktayı buraya atar orijine olan uzaklığı hesaplar
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include "Nokta.hpp"
#include <sstream> 
#include <cmath>
 int xCoord;
 int yCoord;
 int zCoord;
 int oncelik; // orjine olan uzaklık oncelik olarak hesaplanacak
Nokta::Nokta(int _xCoord, int _yCoord, int _zCoord)
{
          this->xCoord = _xCoord;
          this->yCoord = _yCoord;
          this->zCoord = _zCoord;
          this->oncelik = orjineOlanUzaklik(_xCoord, _yCoord, _zCoord);
};
 int Nokta:: orjineOlanUzaklik(int xCoord, int yCoord, int zCoord)
{
    int uzaklik = pow(xCoord, 2) + pow(yCoord, 2) + pow(zCoord, 2);
    uzaklik = sqrt(uzaklik);
    return   uzaklik;
}