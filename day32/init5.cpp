//#include <iostream>
//
//class Position {
//
//private:
//	int m_x;
//	int m_y;
//
//public:
//	Position(int x, int y) { 
//		printf("position��ü ����\n");
//		m_x = x;
//		m_y = y;
//	}
//	
//	void getData() {
//		printf("(x,y)=(%d,%d)\n", m_x, m_y);
//	}
//};
//
//class ObjClass {
//private:
//	Position pos;		//��ü �������
//
//public :
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass��ü ����\n"); }   //ObjClass�� �����Ǳ� ���� ��������� Position��ü�� �����Ǿ�� �Ѵ�. 
//	void showValue() {
//		pos.getData();
//	}
//};
//
//int main(void) {
//
//	ObjClass o(3,6);
//	o.showValue();
//	return 0;
//}