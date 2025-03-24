#include <iostream>
class Base {
public:
	void show() { printf("Base Class\n"); }
};

class Derived : public Base {
	
public:
	void show() { printf("Derived Class\n"); }
};


int main(void) {
	Base obj;
	Derived* dptr = nullptr;
	//dptr = &obj;   // Base*를 Derived*에 할당할 수 없다.
	dptr = (Derived*)&obj;

	
	return 0;
}