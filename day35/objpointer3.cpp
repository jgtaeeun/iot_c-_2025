/*
	
*/

//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	//MyClass(){}
//	MyClass(int v=0) :value(v){
//
//	}
//	void showMyClass(){
//		std::cout << "value : " << value << std::endl;
//	}
//};
//int main(void) {
//	/*
//	�⺻ �����ڿ� �Է� 1�� �޴� �����ڿ� ����Ʈ ���� �ִ� ��쿡�� �⺻�����ڰ� �ΰ� �ִٰ� ��������.
//	
//	�⺻ �����ڰ� ���� �Է��� 1�� �޴� �����ڰ� ���� ��, MyClass obj;�� �ڵ����� �Է� 1���� �����ڸ� ȣ���Ϸ��� �õ��մϴ�. 
//	 ������ �� ���, ����Ʈ ���� ������� ������ �����Ϸ��� �ش� �����ڿ� ���� ���ڸ� �������� �ʾƼ� ������ �߻��մϴ�.
//	*/
//	MyClass* ptr = new MyClass(12);
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//	delete ptr;
//
//
//
//	/*
//	ptr�� ����Ű�� �� �޸𸮸� �����մϴ�. �̶� ptr�� ���� �� �޸𸮸� ����Ű�� �ʰ� �˴ϴ�. ������ ptr ��ü�� ������ �����ϰ�, �ٸ� �ּҸ� ����ų �� �ֽ��ϴ�.
//	ptr = &obj;ó�� ptr�� ���ο� ���� �޸� �ּҸ� �Ҵ��� �� �ֽ��ϴ�. �̶� ptr�� �� �̻� ������ �� �޸𸮸� ����Ű�� �ʰ�, ���ÿ� �����ϴ� obj ��ü�� �ּҸ� ����ŵ�ϴ�.
//	*/
//	MyClass obj;
//	ptr = &obj;
//	ptr->showMyClass();
//	printf("value:%d\n", ptr->value);
//	return 0;
//}