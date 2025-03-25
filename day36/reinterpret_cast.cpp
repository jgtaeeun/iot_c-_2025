/*
	reinterpret_cast
	포인터->포인터, 포인터->변수, 변수->포인터로 하는 주로 포인터 관련 연산자
*/

//#include <iostream>
//
//int main(void) {
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);   //int* -> long
//	unsigned int ui = reinterpret_cast<int>(ip);//int* -> uint
//
//	printf("ip: %u, lg:%u , ui:%u \n", ip, lg, ui);  //ip: 1230272752, lg:1230272752 , ui:1230272752
//
//
//	//해결필요	- X86로 하기
//	int* p = reinterpret_cast<int*>(lg);
//	int* p1 = reinterpret_cast<int*>(ui);
//	printf("p: %d, p1:%d\n", *p,*p1);
//
//	int* p2 = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p2);   //int*->char* 
//	printf("pc: %d\n", *pc);
//
//	p2 = reinterpret_cast<int*>(pc);		//char*->int* 
//	printf("p: %d\n", *p2);
//
//
//	return 0;
//}
