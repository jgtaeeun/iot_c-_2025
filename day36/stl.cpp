/*
	STL 컨테이너 - 시퀀스컨테이너- 벡터
*/

//#include <iostream>
//#include <vector>
//
//int main(void) {
//
//	std::vector<int> v;
//	std::vector<int> v1{ 10 };
//	std::vector<int> v2 = { 1,2,3,4,5 };
//	std::vector<int> v3(5);   //벡터의 크기를 지정 , 기본값 초기화는 int처럼 기본 타입의 경우 0
//
//	// vector의 크기 .size()
//	std::cout << "v size: " << v.size() << std::endl;    //0      
//	std::cout << "v1 size: " << v1.size() << std::endl;    //1
//	std::cout << "v2 size: " << v2.size() << std::endl;    //5 
//	std::cout << "v3 size: " << v3.size() << std::endl;    //5
//
//	for (int i = 0; i < 5; i++) {
//		printf("v2[%d] : %d\t", i, v2[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//		printf("v3[%d] : %d\t", i, v3[i]);
//	}
//
//	std::cout << std::endl;   //범위기반 for문-인덱스를 사용할 수 없다.
//	for (auto i : v2) {
//		std::cout << i << std::endl;
//	}
//
//	//벡터에서 첫 번째와 마지막 요소를 반복자(iterator)를 사용해 접근하는 방법입니다.
//	//begin()은 첫 번째 요소를 가리키고, end()는 마지막 요소 뒤를 가리키는 반복자입니다.
//	//즉, v.end()는 벡터의 마지막 요소 바로 뒤에 위치합니다. 이 위치는 값을 참조할 수 없는 위치이며, 보통 end()는 반복문에서 종료 조건으로 사용됩니다.
//	std::cout << "v2의 첫번째 요소값: " << *v2.begin()<< std::endl;
//	std::cout << "v2의 마지막 요소값: " << *(v2.end()-1) << std::endl;
//	return 0;
//}


/*

v2.begin()은 벡터의 첫 번째 요소를 가리키는 반복자입니다.

v2.end()는 벡터의 마지막 요소 뒤를 가리키는 반복자입니다.

*v2.begin()은 첫 번째 요소의 값을 반환하고, *(v2.end() - 1)은 마지막 요소의 값을 반환합니다.
*/