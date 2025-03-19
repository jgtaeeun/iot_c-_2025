//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//int main() {
//
//	char str[20] = "홍길동";
//	std::cout << str << std::endl;
//
//	char str2[20];
//	//str2 = "홍길동";					//str2는 배열이름, 즉 첫번째요소의 주소이다. 상수이므로 lvalue가 될 수 없다.
//	strcpy(str2, "김영희");				
//	std::cout << str2 << std::endl;
//
//	char str3[100];						//이 배열은 최대 99개의 문자와 문자열 종료를 나타내는 '\0'을 저장할 수 있습니다.
//	std::cout << "이름입력: ";
//	std::cin >> str3;					//공백을 기준으로 입력을 처리하기 때문에 공백이 포함된 문자열은 제대로 처리되지 않습니다. 
//	std::cout << str3 << std::endl;
//
//	const char* name;					// 포인터는 문자열의 첫 번째 문자를 가리키며, 해당 문자열을 변경할 수 없습니다. 문자열을 수정하는 것에 대한 제한이 있기 때문에 const로 선언됩니다.
//	name = "김철수";					//문자열 상수
//	std::cout << name << std::endl;		//문자열의 끝을 나타내는 '\0' 문자를 만날 때까지 문자열을 출력합니다. 
//
//	return 0;
//}