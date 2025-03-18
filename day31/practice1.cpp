///*
//	이름과 전화번호를 문자열의 형태로 입력받아서 , 입력 받은 데이터를 그대로 출력
//*/
//#include <iostream>
//
//int main(void) {
//
//	char name[2][100];
//	//std::cin >> name[0] >>name[1];
//
//	//std::cin은 기본적으로 공백을 구분자로 처리하기 때문에, 두 번째 입력이 공백을 포함할 경우 제대로 입력되지 않습니다.
//	//이를 해결하려면 std::cin.getline()을 사용하여 한 줄을 입력받는 방법을 사용할 수 있습니다
//	std::cin.getline(name[0], 100);  // 첫 번째 이름 입력
//	std::cin.getline(name[1], 100);  // 두 번째 이름 입력
//
//	std::cout << name[0] << std::endl;
//	std::cout << name[1] << std::endl;
//
//	return 0;
//}