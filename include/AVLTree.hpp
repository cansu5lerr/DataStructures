#ifndef AVLTree_hpp
#include "AVLNode.hpp"
#define AVLTree_hpp
class AVLTree
{
    AVLNode* kokDugum;
public: int yukseklikHesapla(AVLNode* node);
    AVLNode* elemanEkle(AVLNode* kok, AVLNode* eklenecek);
    AVLNode* agaciDengele(AVLNode* kok);
    AVLNode* RightRightRotation(AVLNode* parent);
    int farkHesapla(AVLNode* t);
    AVLNode* RightLeftRotation(AVLNode* parent);
    AVLNode* RightRotation(AVLNode* parent);
    AVLNode* LeftLeftRotation(AVLNode* parent);
    AVLNode* LeftRightRotation(AVLNode* parent);  
    void postorderYazdir(AVLNode* kok);
       
};
#endif
 

 


