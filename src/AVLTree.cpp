/**
* @file AVLTree.cpp dosyası
* @description AVL ağacını oluşturma
* @course 2. Öğretim C Grubu
* @assignment 2. Ödev
* @date 26.12.2021
* @author Cansu Beşler cansu.besler@ogr.sakarya.edu.tr 
**/
#include "AVLTree.hpp"
#include "AVLNode.hpp"
#include<iostream>
using namespace std;
AVLNode* kokDugum;
int AVLTree::yukseklikHesapla(AVLNode* node){
      int yukseklik = 0;
        if (node != NULL) {
            int solYukseklik = yukseklikHesapla(node->sol);
            int sagYukseklik = yukseklikHesapla(node->sag);
            int maksimumYukseklik = max(solYukseklik, sagYukseklik);
            yukseklik = maksimumYukseklik + 1;
        }
        return yukseklik;
}
 AVLNode* AVLTree:: elemanEkle(AVLNode* kok, AVLNode* eklenecek){
    if (kok == NULL) {
            kok = new AVLNode;
            kok->deger = eklenecek->deger;
            kok->sol = NULL;
            kok->sag = NULL;
            kok->oncelikliSatirKuyrugu = eklenecek->oncelikliSatirKuyrugu;
            return kok;
        }
        else if (eklenecek->deger <= kok->deger) {
            kok->sol = elemanEkle(kok->sol, eklenecek);
            kok = agaciDengele(kok);
        }
        else if (eklenecek->deger >= kok->deger) {
            kok->sag = elemanEkle(kok->sag, eklenecek);
            kok = agaciDengele(kok);
        } return kok;  
 }
    AVLNode* AVLTree:: agaciDengele(AVLNode* kok){
        int dengeFarki = farkHesapla(kok);
        if (dengeFarki > 1) {
            if (farkHesapla(kok->sol) > 0)
                kok = LeftLeftRotation(kok);
            else
                kok = LeftRightRotation(kok);
        }
        else if (dengeFarki < -1) {
            if (farkHesapla(kok->sag) > 0)
                kok = RightLeftRotation(kok);
            else
                kok = RightRightRotation(kok);
        }
        return kok;
        }
      AVLNode* AVLTree:: RightRightRotation(AVLNode* parent) {
        AVLNode* tmp;
        tmp = parent->sag;
        parent->sag = tmp->sol;
        tmp->sol = parent;        
        return tmp;
    }
    int AVLTree:: farkHesapla(AVLNode* t) {
        int solYukseklik = yukseklikHesapla(t->sol);
        int sagYukseklik = yukseklikHesapla(t->sag);
        return solYukseklik - sagYukseklik;
    }
    AVLNode* AVLTree:: RightLeftRotation(AVLNode* parent) {
        AVLNode* tmp;
        tmp = parent->sag;
        parent->sag = LeftLeftRotation(tmp);
        return RightRightRotation(parent);
    }
    AVLNode* AVLTree:: RightRotation(AVLNode* parent) {
        AVLNode* tmp;
        tmp = parent->sag;
        parent->sag = tmp->sol;
        tmp->sol = parent;
        return tmp;
    }
    AVLNode* AVLTree:: LeftLeftRotation(AVLNode* parent) {
        AVLNode* temp;
        temp = parent->sol;
        parent->sol = temp->sag;
        temp->sag = parent;
        return temp;
    }
    AVLNode* AVLTree:: LeftRightRotation(AVLNode* parent) {
        AVLNode* temp;
        temp = parent->sol;
        parent->sol = RightRightRotation(temp);
        return LeftLeftRotation(parent);
    }
   
    void AVLTree:: postorderYazdir(AVLNode* kok) {
        if (kok == NULL)
            return;
        postorderYazdir(kok->sol);
        postorderYazdir(kok->sag);
        kok->oncelikliSatirKuyrugu.kuyruguYazdir();
    }