#ifndef AVLNode_hpp
#include "Kuyruk.hpp" 
#define AVLNode_hpp
class AVLNode
{
public:
    Kuyruk oncelikliSatirKuyrugu;
    int deger;
    AVLNode* sol;
    AVLNode* sag;
};
#endif