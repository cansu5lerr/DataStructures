/**
* @file Source.cpp dosyası
* @description Program çalışır
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "DosyaOkuma.hpp"
using namespace std;
 

int main() {
   
	DosyaOkuma dosyaOku;
	dosyaOku.DosyaOku("Noktalar.txt");	
}