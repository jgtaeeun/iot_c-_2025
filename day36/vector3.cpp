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
//	//��� 1
//	for (auto i = 0; i < v.size(); i++) {
//
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;
//	}
//
//	//��� 2
//	/*
//	vector<int>::size_type =>unsigned 
//	int������ ũ��� ���õ� ���� ������ �ʿ䰡 ���� ������ ��ȣ ���� �ڷ����� ����մϴ�.
//	*/
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}
//
//	//���3
//	/*
//	vector<int>::iterator�� vector<int> Ÿ�� ������ ��Ҹ� ����ų �� �ִ� �ݺ����Դϴ�.
//	iter�� �� �ݺ����� ���� �̸��Դϴ�.
//
//	v.end()�� ������ ���� ����Ű�� �ݺ��ڸ� ��ȯ�մϴ�. 
//	���� ����Ű�� �ݺ��ڴ� ���� ��Ҹ� ����Ű�� ������, ������ ������ ��� �ٷ� �ڸ� ����ŵ�ϴ�.
//	�ݺ��������� �� end()�� ����Ͽ� ���� ������ �����մϴ�
//
//	�ݺ��ڴ� ������ó�� �����ϸ�, *iter�� iter�� ����Ű�� ���� ���� �����ɴϴ�.
//	*/
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//
//	//��� 4
//	for (auto i : v) {
//		cout << i << endl;
//	}
//	return 0;
//}