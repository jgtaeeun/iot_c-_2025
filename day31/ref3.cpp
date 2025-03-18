//#include <iostream>
//
//int main(void) {
//
//	int num = 10 , num2 = 100;
//	int& ref = num;	//num의 메모리 공간에 ref라는 별명이 붙는다.
//	int* pn = &num; //포인터변수 선언
//	
//	//int& rref;    //선언과 동시에 초기화가 되어야함.
//	//rref = ref;
//	int& rref = ref;
//	std::cout << "rref:" << rref << std::endl;
//	rref = num2;
//	std::cout << "rref:" << rref << std::endl;
//	num++;
//	ref++;
//	(*pn)++;
//
//	std::cout << "num++: " << num << std::endl;  //num++: 13
//	std::cout << "ref++: " << ref << std::endl;  //ref++: 13
//	std::cout << "(*pn)++: " << *pn << std::endl; //(*pn)++: 13
//	std::cout << "&num:" << &num << std::endl;  //&num:00000016A0CFF604
//	std::cout << "&ref:" << &ref << std::endl;  //&ref:00000016A0CFF604
//
// 	return 0;
//}