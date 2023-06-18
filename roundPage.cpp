#include <iostream>
using namespace std;


class roundPage
{

private:
	float radius;
public:
	roundPage() {
		radius = 1;
	}
	roundPage(float _radius) {
		radius = _radius;
	}
	virtual float getradius() {
		return radius;
	}

	void setRadius(float _radius) {
		radius = _radius;
	}
};

