//#include <iostream>
//class Calculator {
//
//private:
//	double num1;
//	double num2;
//	int acount;
//	int dcount;
//	int mcount;
//	int mucount;
//
//public :
//	void Init() {
//		num1 = 0.0;
//		num2 = 0.0;
//		acount = 0;
//		dcount = 0;
//		mcount = 0;
//		mucount = 0;
//	}
//	double Add(double a, double b) {
//		num1 = a;
//		num2 = b;
//		acount += 1;
//		return a + b;
//	}
//	double Div(double a, double b) {
//		num1 = a;
//		num2 = b;
//		dcount += 1;
//		return a / b;
//	}
//	double Min(double a, double b) {
//		num1 = a;
//		num2 = b;
//		mcount += 1;
//		return a - b;
//	}
//	double Mul(double a, double b) {
//		num1 = a;
//		num2 = b;
//		mucount += 1;
//		return a * b;
//	}
//	void ShowOpCount() {
//		std::cout << "µ¡¼À: " << acount <<" »¬¼À: " << mcount << " °ö¼À: " <<mucount << " ³ª´°¼À: " << dcount << std::endl;
//	}
//};
//int main(void) {
//
//	Calculator cal;
//	cal.Init();
//	std::cout << "3.2 +2.4 = " << cal.Add(3.2, 2.4) << std::endl;
//	std::cout << "3.5 /1.7 = " << cal.Div(3.5, 1.7) << std::endl;
//	std::cout << "2.2 -1.5 = " << cal.Min(2.2, 1.5) << std::endl;
//	std::cout << "4.9 /1.2 = " << cal.Div(4.9, 1.2) << std::endl;
//	cal.ShowOpCount();
//	return 0;
//}