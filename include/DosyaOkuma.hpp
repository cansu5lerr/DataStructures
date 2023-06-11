#ifndef DosyaOkuma_hpp
#include <iostream>
#include <fstream>
#include <string> 
#include <sstream>
#include "Nokta.hpp" 
#include "Kuyruk.hpp"
#include "DogruParcasi.hpp"
#include "AVLNode.hpp"
#include "AVLTree.hpp"
#define DosyaOkuma_hpp
using namespace std;
class DosyaOkuma
{
public: void DosyaOku(std::string dosyaAdi);
public: AVLNode* satiriParcala(string satir);
};
#endif