//#include <iostream>
//
//
//class Time {
//
//private:
//	int hour;
//	int min;
//	int sec;
//
//public:
//	Time() {	}
//	Time(int abssec) {
//		hour = abssec / 3600;
//		min = (abssec / 60) % 60;
//		sec = abssec % 60;
//	}
//	void printTime() {
//		printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main(void) {
//	//Time now(9999);	//������
//	Time now = 9999;   //��ȯ������ (int -> Time)
//	now.printTime();
//	return 0;
//}
