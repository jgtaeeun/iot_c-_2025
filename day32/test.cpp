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
void AClass:: getData() const { std::cout << "AClass�� �ν��Ͻ���ü�Դϴ�. ������� n�� ���� " << n << "�Դϴ�." << std::endl; }