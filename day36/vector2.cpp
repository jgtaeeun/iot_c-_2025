//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(void) {
//
//	vector<int> v;
//	cout << "v[i], v.size() , v.capacity()" << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);    //push_back(i + 1)을 사용하여 v 벡터의 끝에 값을 추가합니다.
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
//		}
//	//	//v.size()는 벡터에 들어 있는 요소의 수
//
//	//	/*
//	//	
//	//	용량(capacity): 벡터가 메모리를 할당할 수 있는 공간의 크기입니다. 
//	//	벡터의 크기가 증가할 때, 벡터는 메모리를 재할당하여 용량을 확장할 수 있습니다. 
//	//	필요한 시점에 두 배씩 증가합니다.
//	//	*/
//	//	
//	//
//	//}
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);
//	v2.insert(find(v2.begin(), v2.end(), 12), 20);   // 13을 찾은 위치 바로 앞에 20을 삽입하기 위함입니다.  
//	v2.pop_back();
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	
//	
//	return 0;
//}
//
//
///*
//v.push_back(10) : 마지막원소 뒤에 10을 추가한다.
//v.insert(idx, val) : idx위치에 val을 넣는다.
//v.capacity: 벡터에 할당된 메모리 크기
//v.pop_back() : 마지막원소 제거
//*/