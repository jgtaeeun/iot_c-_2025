//#include <iostream>
//
//int& plus(int& ref) {
//	ref++;
//	return ref;
//}
//int main(void) {
//
//	int num = 1;
//	int num2 =plus(num);  //num�� num2�� �ּ� �ٸ���.
//
//	num+=1;
//	num2 += 100;
//	std::cout << "num: " << num << std::endl;  //3
//	std::cout << "num2: " << num2 << std::endl; //102
//	std::cout << "num�� �ּ�: " << &num << std::endl;  // 00000012C656F9E4
//	std::cout << "num2�� �ּ�: " << &num2 << std::endl; //00000012C656FA04
//
//	return 0;
//}