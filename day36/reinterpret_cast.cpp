/*
	reinterpret_cast
	������->������, ������->����, ����->�����ͷ� �ϴ� �ַ� ������ ���� ������
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
//	//�ذ��ʿ�	- X86�� �ϱ�
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
