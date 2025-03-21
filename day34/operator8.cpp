///*
//	전역함수 -private
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
//	/*함수원형에 freind선언을 하면 private 또는 protected 멤버변수 접근 가능*/
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
////출력 연산자 오버로딩
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
//	std::cout << c << std::endl; //출력연산자(<<)는 기본적으로 객체를 구현할 수 없다.
//
//
//	return 0;
//}
//
