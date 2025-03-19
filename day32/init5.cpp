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
//		printf("position객체 생성\n");
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
//	Position pos;		//객체 멤버변수
//
//public :
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass객체 생성\n"); }   //ObjClass가 생성되기 전에 멤버변수로 Position객체가 생성되어야 한다. 
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