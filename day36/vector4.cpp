///*
//	vector 삽입, 삭제, 참조
//*/
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//
//	vector<string> v;
//
//	v.push_back("tiger");
//	v.push_back("lion");
//	v.push_back("elephant");
//	v.push_back("horse");
//
//	cout << v.front() << endl;			//tiger
//	cout << v.back() << endl;			//horse
//	cout << v.capacity() << endl;		//4
//	cout << v.size() << endl;			//4
//
//
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "elephant") {
//			v.erase(iter);
//			break;
//		}
//	}
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//
//	return 0;
//}