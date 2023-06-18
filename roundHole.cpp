#include <iostream>
using namespace std;
#include "roundPage.cpp"


class roundHole
{
private:
	float radius;

public:

	roundHole(float _radius) {
		radius = _radius;
	}
	float getradius() {
		return radius;
	}
	bool fits(roundPage* page) {
		return   radius >= page->getradius();
	}

};
