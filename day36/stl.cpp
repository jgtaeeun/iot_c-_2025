/*
	STL �����̳� - �����������̳�- ����
*/

//#include <iostream>
//#include <vector>
//
//int main(void) {
//
//	std::vector<int> v;
//	std::vector<int> v1{ 10 };
//	std::vector<int> v2 = { 1,2,3,4,5 };
//	std::vector<int> v3(5);   //������ ũ�⸦ ���� , �⺻�� �ʱ�ȭ�� intó�� �⺻ Ÿ���� ��� 0
//
//	// vector�� ũ�� .size()
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
//	std::cout << std::endl;   //������� for��-�ε����� ����� �� ����.
//	for (auto i : v2) {
//		std::cout << i << std::endl;
//	}
//
//	//���Ϳ��� ù ��°�� ������ ��Ҹ� �ݺ���(iterator)�� ����� �����ϴ� ����Դϴ�.
//	//begin()�� ù ��° ��Ҹ� ����Ű��, end()�� ������ ��� �ڸ� ����Ű�� �ݺ����Դϴ�.
//	//��, v.end()�� ������ ������ ��� �ٷ� �ڿ� ��ġ�մϴ�. �� ��ġ�� ���� ������ �� ���� ��ġ�̸�, ���� end()�� �ݺ������� ���� �������� ���˴ϴ�.
//	std::cout << "v2�� ù��° ��Ұ�: " << *v2.begin()<< std::endl;
//	std::cout << "v2�� ������ ��Ұ�: " << *(v2.end()-1) << std::endl;
//	return 0;
//}


/*

v2.begin()�� ������ ù ��° ��Ҹ� ����Ű�� �ݺ����Դϴ�.

v2.end()�� ������ ������ ��� �ڸ� ����Ű�� �ݺ����Դϴ�.

*v2.begin()�� ù ��° ����� ���� ��ȯ�ϰ�, *(v2.end() - 1)�� ������ ����� ���� ��ȯ�մϴ�.
*/