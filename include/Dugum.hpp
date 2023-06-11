#ifndef  Dugum_hpp
#include "Nokta.hpp"
#define Dugum_hpp
class Dugum {

public:
	Dugum() {	}
	Dugum(Nokta veri) {
		this->veri = veri;
		sonraki = NULL;
	}
	Dugum* sonraki;
	Nokta veri;
	int  oncelik;
};
#endif