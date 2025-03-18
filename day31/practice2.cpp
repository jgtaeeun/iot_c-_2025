//#include <iostream>
//
//void swap(int*, int*);
//void swap(char*, char*);
//void swap(double*, double*);
//
//
//int main(void) {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char char1 = 'A', char2 = 'B';
//	swap(&char1, &char2);
//	std::cout << char1 << ' ' << char2 << std::endl;
//
//	double double1 = 1.111,	double2 = 5.555;
//	swap(&double1, &double2);
//	std::cout << double1 << ' ' << double2 << std::endl;
//	return 0;
//}
//
///*
//포인터가 가리키는 값을 바꾸는 것이 목표인 경우, *a와 *b를 사용하여 간접 참조를 통해 값을 변경해야 합니다.
//
//a = b;를 쓰면, a가 이제 b가 가리키는 주소를 가리키게 됩니다. 하지만 원래 a가 가리키고 있던 값은 바뀌지 않게 됩니다.
//그리고 a와 b 포인터의 주소를 바꾸는 것 자체는 함수 종료 후에는 더 이상 의미가 없게 됩니다. 
//함수 내에서 a와 b가 가리키는 주소가 바뀌지만, 실제 값의 교환은 이루어지지 않기 때문입니다.
//*/
//
//void swap(int* a , int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(char* a, char* b) {
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(double* a, double* b) {
//	double temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}