/*
	virtual class - ���������ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ����

*/

//#include <iostream>
//
//class Cinterface {
//public:
//	Cinterface() { std::cout << "Cinterface constructor" << std::endl; }
//	virtual void getData() const = 0;		// ���� ���� �Լ�
//
//};
//
//class Cinsub : public Cinterface {
//public:
//
//	Cinsub() { std::cout << "Cinsub constructor" << std::endl; }
//	void getData() const  override { std::cout << "Pure Virtual Function()" << std::endl; }   //���� ���� �Լ��� ������
//};
//int main(void) {
//	//Cinterface c;  //Cinterface�� ���� ���� �Լ��� �ֱ� ������ �߻� Ŭ�����Դϴ�. ���� Cinterface Ŭ���� ��ü�� ��ü�� ������ �� �����ϴ�.
//
//	/* �ڽ�Ŭ���� ������ ȣ���� ���, �θ�Ŭ���� �����ڰ� ������ ���, �θ�Ŭ���� �⺻�����ڰ� ȣ��ȴ�.*/
//	Cinsub c;		//Cinterface constructor
//					//Cinsub constructor
//
//	c.getData();	//Pure Virtual Function()
//	return 0;
//}