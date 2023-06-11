#ifndef Kuyruk_hpp
#include "Dugum.hpp"
#include <iostream>
#define Kuyruk_hpp
using namespace std;
class Kuyruk
{
private:
    Dugum * ilk ;
public:
    Kuyruk()
    {
       ilk = NULL;
    }
    Kuyruk kopyasiniOlustur_onceliksiz();
    /**
    * Kuyruktaki elemanlarin onceliklerini yazdiran method
    **/
    void kuyruguYazdir();
    /*
    Kuyrugun eleman sayisini hesaplayan method
    */
    int  kuyrukElemanSayisi();
    /*
    * kuyruktaki ilk elemanı donduren ve kuyruktan alan method
    */
    Nokta elemanAl();
    /*
    * Kuyruktaki ilk elemanı gosterie. kuyruktan almaz 
    */
    Nokta ilkElemaniGoster();
    /*
    * kuyruga onceligine gore eleman ekleyen methos
    */
    void kuyrugaEkle_oncelikli(Nokta nokta );
    /*
    * kuyruga elemen ekleyen method. oncelik degerlendirmez
    */
    void kuyrugaEkle_onceliksiz(Nokta nokta);
};
#endif
