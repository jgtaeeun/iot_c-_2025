#include <iostream>

class AClass {
private:
	int n;
public:
	AClass(){}
	AClass(int num);
	void getData() const;
};


int main(void) {

	
	AClass a(30);
	a.getData();
	return 0;

}


AClass::AClass(int num) { n = num; }
void AClass:: getData() const { std::cout << "AClass의 인스턴스객체입니다. 멤버변수 n의 값은 " << n << "입니다." << std::endl; }