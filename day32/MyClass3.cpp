///*
//	�����Ҵ� -������ ����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//
//private:
//	int id;
//	char* name;
//	int age;
//
//public :
//	MyClass() {}
//
//	MyClass(int i_id, const char* i_name, int i_age){   // const �����ͺ����� ������ �����ͻ�� �������� (������ �Ұ�)
//		id = i_id;
//
//		//std::cout << strlen(i_name) << std::endl;
//		
//		
//		name = new char[strlen(i_name)+1];  // �����ͺ���=�迭�̸�=�迭�� ù��°�ּ� =>str(�迭�̸�)   
//											// ���� �޸� �Ҵ� �� +1�� �ϴ� ������ �� ���� ����(null terminator, '\0')�� �����ϱ� ���ؼ��Դϴ�.
//		strcpy(name, i_name);
//		age = i_age;
//	}
//	
//	void printData(){
//		std::cout << "MyClass�� �ν��Ͻ��Դϴ�.";
//		std::cout << "���̵�: " << id << " �̸� :" << name << " ����: " << age << std::endl;
//		
//	}
//	//�Ҹ���(�ڵ�ȣ��ȴ�.)- �����Ҵ��� ����� ������ �ۼ��� �ʿ䰡 ����.
//	~MyClass(){
//		
//		delete[] name;
//	}
//};
//
//int main(void) {
//	
//	MyClass m (5, "������", 32);
//	m.printData();
//	
//	return 0;
//
//}