#include <iostream>
using namespace std;

class mouse {
	string name;
public:
	void print() {
		cout << "name: " << name;
	}
};

class web {
	string name;
public:
	void print() {
		cout << "name: " << name;
	}
};

class ssd {
	string name;
public:
	void print() {
		cout << "name: " << name;
	}
};

class ram {
	string name;
public:
	void print() {
		cout << "name: " << name;
	}
};


class cpu {
	string name;
public:
	void print() {
		cout << "name: " << name;
	}
};

class laptop {
	string model;
	double price;
	cpu cp;
	ram ra;
	ssd sd;
	web* we;
	mouse* mous;
public:
	laptop(string m, double p, cpu c, ram r, ssd s, web* w, mouse* mo){
		model = m;
		price = p;
		cp = c;
		ra = r;
		sd = s;
		we = w;
		mous = mo;
	}
	void print()
	{
		cout << "model: " << model << "\tprice: " << price << "\tcpu: ";
		cp.print();
		cout << "\tram: ";
		ra.print();
		cout << "\tssd: ";
		sd.print();
		cout << "\twe";
		we->print();
		cout << "\t mouse: ";
		mous->print();
	}
	void setmouse(mouse* m) {
		mous = m;
	}
	void setweb(web* w) {
		we = w;
	}
};

int main() {

}