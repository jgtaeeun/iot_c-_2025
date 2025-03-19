#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Printer {

private:
	char* str;
public:
	void setString(const char* s) {
		str = new char[strlen(s) + 1];

		strcpy(str, s);
	}

	void showString() {
		std::cout << str << std::endl;
	}

	~Printer() {

		delete[] str;
	}

};
int main(void) {
	Printer p;
	p.setString("hello world!");
	p.showString();

	Printer p2;
	p2.setString("I love c++");
	p2.showString();
	return 0;
}