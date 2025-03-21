///*
//	�����Լ� -private
//*/
//#include <iostream>
//
//class Complex {
//
//private:
//	double real, image;
//
//public:
//	Complex(double r = 0, double i = 0) :real(r), image(i) {}
//
//	Complex add(const Complex& other) {
//		return Complex(real + other.real, image + other.image);
//	}
//
//	Complex operator+(const Complex& other) {
//		return Complex(real + other.real, image + other.image);
//	}
//
//	Complex operator*(const Complex& other) {
//		return Complex(real * other.real, image * other.image);
//	}
//	/*�Լ������� freind������ �ϸ� private �Ǵ� protected ������� ���� ����*/
//	friend Complex operator*(int n, const Complex& other);
//	
//	friend std::ostream& operator<<(std::ostream& out, const Complex& other);
//
//	void showComplex() {
//		printf("%.1lf %.1lf\n", real, image);
//	}
//
//};
//
//inline Complex operator*(int n, const Complex& other) {
//	return Complex(n * other.real, n * other.image);
//}
////��� ������ �����ε�
//inline std::ostream& operator<<(std::ostream& out, const Complex& other) {
//	out << other.real << ", " << other.image;
//	return out;
//}
//int main(void) {
//	Complex c(1.1, 2.2);
//	Complex c2(3.3, 4.4);
//	Complex c3 = c * c2;
//	c3.showComplex();
//	Complex c4 = 10 * c;
//	c4.showComplex();
//
//	std::cout << c << std::endl; //��¿�����(<<)�� �⺻������ ��ü�� ������ �� ����.
//
//
//	return 0;
//}
//
