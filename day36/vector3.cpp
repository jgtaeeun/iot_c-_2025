//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main(void) {
//
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(11);
//	v.push_back(12);
//	v.push_back(13);
//
//	printf("%d\n", v[2]);  // 12
//
//	//출력 1
//	for (auto i = 0; i < v.size(); i++) {
//
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;
//	}
//
//	//출력 2
//	/*
//	vector<int>::size_type =>unsigned 
//	int벡터의 크기와 관련된 값은 음수일 필요가 없기 때문에 부호 없는 자료형을 사용합니다.
//	*/
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//
//	//출력3
//	/*
//	vector<int>::iterator는 vector<int> 타입 벡터의 요소를 가리킬 수 있는 반복자입니다.
//	iter는 이 반복자의 변수 이름입니다.
//
//	v.end()는 벡터의 끝을 가리키는 반복자를 반환합니다. 
//	끝을 가리키는 반복자는 실제 요소를 가리키지 않지만, 벡터의 마지막 요소 바로 뒤를 가리킵니다.
//	반복문에서는 이 end()를 사용하여 종료 조건을 설정합니다
//
//	반복자는 포인터처럼 동작하며, *iter는 iter가 가리키는 실제 값을 가져옵니다.
//	*/
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//
//	//출력 4
//	for (auto i : v) {
//		cout << i << endl;
//	}
//	return 0;
//}