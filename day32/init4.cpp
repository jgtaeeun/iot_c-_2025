//#include <iostream>
//
//
//class ConstClass {
//
//private:
//	int m_value;
//	const int m_value2;
//
//public:
//	ConstClass(int value, int value2) :m_value2(value2) { m_value = value; /*m_value2 = value2;*/}
//
//	void showValue() {
//		printf("value: %d\n", m_value);
//		printf("value2: %d\n", m_value2);
//	}
//};
//int main(void) {
//	ConstClass c(10,100);
//	c.showValue();
//
//	return 0;
//}