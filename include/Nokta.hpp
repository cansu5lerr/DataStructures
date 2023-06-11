#ifndef Nokta_hpp
#include <sstream> 
#include <cmath>
using namespace std;
#define Nokta_hpp
class Nokta
{
public: int xCoord;
public: int yCoord;
public: int zCoord;
public: int oncelik; // orjine olan uzaklık oncelik olarak hesaplanacak
public:Nokta() {};
public:Nokta(int _xCoord, int _yCoord, int _zCoord);
public: int orjineOlanUzaklik(int xCoord, int yCoord, int zCoord);
};
#endif