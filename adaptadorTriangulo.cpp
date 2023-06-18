#include <iostream>
#include "roundPage.cpp"
#include "triangulo.cpp"
using namespace std;
class adaptadorTriangulo : public roundPage
{
private:

	triangulo peg;

public:
	adaptadorTriangulo(triangulo _peg) {
		peg = _peg;
	}
	float getradius()
	{
		int p = (peg.getlado1() + peg.getlado2() + peg.getlado3()) / 2;
		return (peg.getlado1() * peg.getlado2() * peg.getlado3()) / (4 * sqrt(p * (p - peg.getlado1()) * (p - peg.getlado2()) * (p - peg.getlado3())));
	}



};


