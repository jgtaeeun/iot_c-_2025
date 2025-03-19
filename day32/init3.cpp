//#include <iostream>
//
//class CTime {
//
//private:
//	int m_hour{0};
//	int m_min{0};
//	int m_sec{0};
//
//public:
//	CTime() { std::cout << "기본 생성자 호출" << std::endl; }	//디폴트생성자
//
//
//	CTime(int h, int m, int s) :m_hour(h), m_min(m),m_sec(s)	//콜론 초기화, 이니셜라이져 리스트 (함수몸체 전에 선언)
//	{
//		std::cout << "입력3개 받는 생성자 호출" << std::endl;
//		/*m_hour = h;
//		m_min = m;
//		m_sec = s;*/
//	}
//
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//
//	void showTime() const {
//		printf("현재시간은 %d:%d:%d입니다.\n", m_hour, m_min, m_sec);
//	}
//	
//};
//int main(void) {
//
//	//CTime now;		//디폴트생성자 호출은 괄호생략
//	CTime now = CTime();
//	now.showTime();
//	
//	CTime t(15, 30, 30);
//	t.showTime();
//
//	return 0;
//}