/*
	static_cast<typeid>(expression)
*/

//#include <iostream>
//
//int main(void) {
//	char ch;
//	int i = 100;
//	float f = 3.14;
//	double d = 2.345;
//
//	ch = static_cast<char>(i);
//	std::cout << ch << std::endl;    //아스키 코드 100 <=> d
//	ch = (char)i;					//명시적 형변환
//	std::cout << ch << std::endl;
//
//	d = static_cast<double>(f);     //float에서 double로의 변환은 정밀도의 확장이므로 숫자 값은 변하지 않으며 그대로 3.14로 출력됩니다.
//	std::cout << d<< std::endl;
//
//	//큰자료형을 작은자료형으로 변환시 데이터가 잘라짐.주의필요
//	i = static_cast<int>(d);
//	std::cout << i << std::endl;
//
//	std::cout<< typeid(ch).name() << std::endl;   //char
//	std::cout << typeid(d).name() << std::endl;		//double
//	return 0;
//}