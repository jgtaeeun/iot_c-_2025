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
//		v.push_back(i + 1);    //push_back(i + 1)�� ����Ͽ� v ������ ���� ���� �߰��մϴ�.
//		cout << "[" << v[i] << ", " << v.size() << ", " << v.capacity() << "]" << endl;
//		}
//	//	//v.size()�� ���Ϳ� ��� �ִ� ����� ��
//
//	//	/*
//	//	
//	//	�뷮(capacity): ���Ͱ� �޸𸮸� �Ҵ��� �� �ִ� ������ ũ���Դϴ�. 
//	//	������ ũ�Ⱑ ������ ��, ���ʹ� �޸𸮸� ���Ҵ��Ͽ� �뷮�� Ȯ���� �� �ֽ��ϴ�. 
//	//	�ʿ��� ������ �� �辿 �����մϴ�.
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
//	v2.insert(find(v2.begin(), v2.end(), 12), 20);   // 13�� ã�� ��ġ �ٷ� �տ� 20�� �����ϱ� �����Դϴ�.  
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
//v.push_back(10) : ���������� �ڿ� 10�� �߰��Ѵ�.
//v.insert(idx, val) : idx��ġ�� val�� �ִ´�.
//v.capacity: ���Ϳ� �Ҵ�� �޸� ũ��
//v.pop_back() : ���������� ����
//*/