//#include <iostream>
//
//int main(void) {
//
//	int num = 10 , num2 = 100;
//	int& ref = num;	//num�� �޸� ������ ref��� ������ �ٴ´�.
//	int* pn = &num; //�����ͺ��� ����
//	
//	//int& rref;    //����� ���ÿ� �ʱ�ȭ�� �Ǿ����.
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