/**
* @file DosyaOkuma.cpp dosyası
* @description Dosyayı okur
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include "DosyaOkuma.hpp"
#include <iostream>
#include <fstream>
#include <string> 
#include <sstream>
#include "Nokta.hpp" 
#include "Kuyruk.hpp"
#include "DogruParcasi.hpp"
#include "AVLNode.hpp"
#include "AVLTree.hpp"
using namespace std;

void DosyaOkuma::DosyaOku(string dosyaAdi)
 {
    AVLNode* kokNode = NULL;
    AVLTree tree = AVLTree();
     fstream dosya;
      dosya.open(dosyaAdi, ios::in);
      if (dosya.is_open()) {
            string satir;
            while (getline(dosya, satir))
                kokNode = tree.elemanEkle(kokNode, satiriParcala(satir));
            dosya.close();
      }
      tree.postorderYazdir(kokNode);
}
 AVLNode* DosyaOkuma:: satiriParcala(string satir)
{
    AVLNode* node = new AVLNode;
    stringstream satirVerisi(satir);    
    string val;     
    Kuyruk onceliksizKuyruk;
    Kuyruk oncelikliKuyruk;
    int dogruParcalariToplamUzunluk = 0;
    while (getline(satirVerisi, val, ' ')) {       
        int x = stoi(val);
        getline(satirVerisi, val, ' ');
        int y = stoi(val);
        getline(satirVerisi, val, ' ');
        int z  = stoi(val);
        Nokta nokta = Nokta(x, y, z);        
        onceliksizKuyruk.kuyrugaEkle_onceliksiz(nokta);
        oncelikliKuyruk.kuyrugaEkle_oncelikli(nokta);
     }
    Kuyruk tmp = onceliksizKuyruk.kopyasiniOlustur_onceliksiz ();
    while (tmp.kuyrukElemanSayisi()!= 1 )
    {
        Nokta n1 = tmp.elemanAl(); // bir eleman al 
        Nokta n2 = tmp.ilkElemaniGoster(); // en ondeki elemanı bir sonraki noktada kullanacagımız için sadece oku
        DogruParcasi dogruParcasi =  DogruParcasi (n1,n2); 
        dogruParcalariToplamUzunluk = dogruParcalariToplamUzunluk + dogruParcasi.uzunluk;
    }
  
    node->deger = dogruParcalariToplamUzunluk;
    node->oncelikliSatirKuyrugu = oncelikliKuyruk; // oncelikli olanın bastırılacagı için bunu ekliyorum.
    return node;     
}   
