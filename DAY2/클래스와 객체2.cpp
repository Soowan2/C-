#include<iostream>
#include<string>
using namespace std;

class Animal {

	string type;
	string color;
	int weight;

public:
	void setColor(string h_color) {
		color = h_color;
	}
	string getColor() {
		return color;
	}
};

int main() {

	Animal animalA;
	animalA.setColor("Èò»ö");
	cout << animalA.getColor() << endl;

}