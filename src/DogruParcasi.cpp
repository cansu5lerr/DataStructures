/**
* @file DogruParcasi.cpp dosyası
* @description Dogru parcasını hesaplar
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include "DogruParcasi.hpp"
#include "Nokta.hpp"
#include <cmath>
using namespace std;
Nokta nokta1;
Nokta nokta2;
int uzunluk;
DogruParcasi::DogruParcasi(Nokta _nokta1, Nokta _nokta2){
    this->nokta1 = _nokta1;
	this->nokta2 = _nokta2;
	this->uzunluk = uzunlugumuHesapla();
}
int DogruParcasi::uzunlugumuHesapla(){
     float x = nokta1.xCoord - nokta2.xCoord;
	float y = nokta1.yCoord - nokta2.yCoord;
	float z = nokta1.zCoord - nokta2.zCoord;
	int uzunluk = sqrt(x * x + y * y + z * z);
	return uzunluk; 
}