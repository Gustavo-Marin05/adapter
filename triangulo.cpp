#include <iostream>
using namespace std;
class triangulo
{
private:
	float lado1;
	float lado2;
	float lado3;


public:
	//hay tres tipos de triangulo
	triangulo() {
		lado1 = 0;
		lado2 = 0;
		lado3 = 0;

	}

	triangulo(float lado) {
		lado1 = lado;
		lado2 = lado;
		lado3 = lado;
	}

	triangulo(float base, float alto) {
		lado1 = alto;
		lado2 = sqrt(pow(base / 2, 2) + pow(alto, 2));
		lado3 = lado2;
	}

	triangulo(float _lado1, float _lado2, float _lado3) {
		lado1 = _lado1;
		lado2 = _lado2;
		lado3 = _lado3;

	}

	float getlado1() {
		return lado1;
	}

	float getlado2() {
		return lado2;
	}

	float getlado3() {
		return lado3;
	}


	void setlado1(float	_side) { lado1 = _side; }
	void setlado2(float	_side) { lado2 = _side; }
	void setlado3(float	_side) { lado3 = _side; }


};