/**
* @file Kuyruk.cpp dosyası
* @description Kuyruk ekleme işlemleri burada olur.
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include "Kuyruk.hpp"
#include"AVLNode.hpp"
#include"Dugum.hpp"
#include<iostream>
using namespace std;
Kuyruk Kuyruk::kopyasiniOlustur_onceliksiz(){
    Kuyruk kopyaKuyruk;
        Dugum* gecici;
        gecici = ilk;
         while (gecici != NULL)
         {
                kopyaKuyruk.kuyrugaEkle_onceliksiz(gecici->veri);
                gecici = gecici->sonraki;
         }
        return kopyaKuyruk;
}
void Kuyruk::kuyruguYazdir(){
      Dugum* gecici;
        gecici = ilk;
        if (ilk == NULL)
            cout << "Kuyruk Boştur"<<endl;
        else
        {
            while (gecici != NULL)
            {
              cout << gecici->oncelik <<" ";
                gecici = gecici->sonraki;
            }
            cout << endl;
        }
}
int Kuyruk::kuyrukElemanSayisi(){
     Dugum* gecici;
        gecici = ilk;
        int elemanSayisi = 0;
        if (ilk == NULL)
            return 0;
        else
        {
            while (gecici != NULL)
            {
                elemanSayisi++;
                gecici = gecici->sonraki;
            }
        }
        return elemanSayisi;
}
Nokta Kuyruk::elemanAl(){
      Nokta nokta;
        Dugum* dugum;
        if (ilk == NULL)  
            return nokta ;
        else
        {
            dugum = ilk;
            nokta = dugum->veri;           
            ilk = ilk->sonraki;
            free(dugum);
        }
        return nokta;
}
Nokta Kuyruk::ilkElemaniGoster(){
     Nokta nokta;
        nokta = ilk->veri;
        return nokta;
}
void Kuyruk::kuyrugaEkle_oncelikli(Nokta nokta){
       Dugum* eklenecek, * tmp;
        eklenecek = new Dugum;
        eklenecek->veri = nokta;
        eklenecek->oncelik = nokta.oncelik;
        if (ilk == NULL || nokta.oncelik < ilk->oncelik)
        {
            eklenecek->sonraki = ilk;
            ilk = eklenecek;
        }
        else
        {
            tmp = ilk;
            while (tmp->sonraki != NULL && tmp->sonraki->oncelik <= nokta.oncelik)
                tmp = tmp->sonraki;
            eklenecek->sonraki = tmp->sonraki;
            tmp->sonraki = eklenecek;
        }

}
void Kuyruk::kuyrugaEkle_onceliksiz(Nokta nokta){
     Dugum* eklenecek, * temp;
        eklenecek = new Dugum;
        eklenecek->veri = nokta;
        eklenecek->oncelik = nokta.oncelik;
        if (ilk == NULL )
        {
            eklenecek->sonraki = ilk;
            ilk = eklenecek;
        }
        else
        {
            temp = ilk;
            while (temp->sonraki != NULL )
                temp = temp->sonraki;
            eklenecek->sonraki = temp->sonraki;
            temp->sonraki = eklenecek;
        }
}