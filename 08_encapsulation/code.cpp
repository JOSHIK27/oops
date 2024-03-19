#include <iostream>
using namespace std;


// this is taken from gfg

// declaring class
class Circle {
	// access modifier
private:
	// Data Member
	float area;
	float radius;

public:
	void getRadius()
	{
		cout << "Enter radius\n";
		cin >> radius;
	}
	void findArea()
	{
		area = 3.14 * radius * radius;
		cout << "Area of circle=" << area;
	}
};
int main()
{
	// creating instance(object) of class
	Circle cir;
	cir.getRadius(); // calling function
	cir.findArea(); // calling function
}


// encapsulation is process of encapsulating all the revelant and related info to a single entity (class)
// in a company we might have several sections : sales, finance, marketing etc. Each part can be encapsulated in a class
// Other members cant access the classes that they are not part off
// we can maintain data security here