//#include <iostream>
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) { std::cout << num << "������" << std::endl; }
//	~MyClass() { std::cout << num << "�Ҹ���" << std::endl; }
//	void setData(int n) { num = n; }
//};
//int main(void) {
//	//MyClass* ptr = &(MyClass{ 10 });//�̸����� ��ü �����Ͽ� �ּҸ� �����ͺ����� �����Ҽ� ����.  lvalue�� �ƴϱ⿡. �����ͺ����� &�����̹Ƿ�
//	//MyClass& obj = MyClass{ 20 };  //�ӽð�ü�� ������ �� �� ����. lvalue�� �ƴϱ⿡. ������ lvalue�����Ѵ�.
//	MyClass obj(MyClass{ 15 });		//�̸����� ��ü�� ��������Ѵ�.
//	obj.setData(25);
//
//
//	MyClass&& obj2 = MyClass{ 46 };			//rvalue ������ const�� �ƴϱ� ������ ��ü�� �����͸� ������ �� �ֽ��ϴ�.
//	obj2.setData(22);
//
//	const MyClass& obj3 = MyClass{ 100 };
//	//obj3.setData()�Ұ�, obj3�� ��������̱⿡ �������� �� ����.
//
//	std::cout << "bye" << std::endl;
//	return 0;
//}