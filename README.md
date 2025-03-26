# iot_c-_2025
c++

## 31일차(3월18일)
- 01-1 입출력 방식

    - 입력 
        - 출력대상의 위치에는 정수, 실수, 문자열 , 변수 등 무엇이든 올 수 있다.
        - std::cout<< 출력대상; 
        - std::cout << 출력대상 << std::endl;       -개행문자\n포함
    ```c++
    /*
        cout -표준 출력 객체
    */
    #include <iostream>
    using namespace std;
    int main(){
        double d = 3.14;		
        std::cout<<"Hello World"<<std::endl;
        cout << d<< endl;
        return 0;
    }
    ```
    - 변수선언
    ```c++
    int num = 100;	//c 스타일 변수 선언
    int num2(200);	//c++스타일 변수 선언
    ```

    - 출력
        - std::cin >>변수명 ;
    ```c++
    #include <iostream>
    using namespace std;
    int main(void) {

        int inVal;
        cout << "숫자를 입력하세요:";
        cin >> inVal;
        cout << "inVal: " << inVal << endl;

        return 0;
    }
    ```
    - 입출력 실습 [C++](./day31/practice1.cpp)
- 01-2 함수 오버로딩    [C++](./day31/overloading.cpp)
    - c에서는 동일한 이름의 함수가 정의되는 것을 허용하지 않는다. 두 함수의 이름이 같기 때문에 컴파일 오류가 발생한다.
    - c++에서는 함수명,매개변수(타입, 개수)가 같아야 같은 함수로 인식한다.
    - 함수 오버로딩(함수의 다중정의)
        - 함수명은 같은데 매개변수의 타입이나 갯수가 다르면 다른함수이다.
        
        ```c++
        int func() {
        	return 10;
        }
        
        int func(char c) {
        	return c;
        }
        
        int func(int n) {
        	return 10 + n;
        }
        
        int func(int n1, int n2) {
            return n1 + n2;
        }
        ```
        - `반환값만 다르고 함수명,매개변수(개수, 타입)이 같은 것은 동일한 함수이므로 오버로드 불가이다.`
        ```c++
        int func(char c) {
        	return c;
        }
        
        //char func(char c) {
    	//    return c;
        //}
        ```
    - 함수 오버라이딩(함수의 재정의)    --> 상속
    - 함수 오버로딩 실습 [C++](./day31/practice2.cpp)
        - `포인터가 가리키는 값을 바꾸는 것이 목표인 경우, *a와 *b를 사용하여 간접 참조를 통해 값을 변경해야 합니다.`
        - a = b;를 쓰면, a가 이제 b가 가리키는 주소를 가리키게 됩니다. 하지만 원래 a가 가리키고 있던 값은 바뀌지 않게 됩니다.그리고 a와 b 포인터의 주소를 바꾸는 것 자체는 함수 종료 후에는 더 이상 의미가 없게 됩니다. 함수 내에서 a와 b가 가리키는 주소가 바뀌지만, 실제 값의 교환은 이루어지지 않기 때문입니다.
        ```c++
        #include <iostream>
        void swap(int*, int*);
        void swap(char*, char*);
        void swap(double*, double*);

        int main(void) {
        int num1 = 20, num2 = 30;
        swap(&num1, &num2);
        std::cout << num1 << ' ' << num2 << std::endl;
        return 0;
        }

        void swap(int* a , int* b){
            int temp;
            temp = *a;
            *a = *b;
            *b = temp;
        }
        ```
- 01-3 매개변수 디폴트 값    [C++](./day31/default.cpp)
    - `디폴트 값은 함수의 선언 부분에만 표현하면 된다.`
    - `default값은 반드시 오른쪽부터 채울 것`
    ```c++
    #include <iostream>

    int coordinates(int x, int y=0, int z=0); 
    int main(void) {

        std::cout << "coordinates(10,20,30):" << coordinates(10, 20, 30) << std::endl;
        std::cout << "coordinates(10, 20, def):" << coordinates(10,20) << std::endl;
        std::cout << "coordinates(10, def, def):" << coordinates(10) << std::endl;

        return 0;
    }
    int coordinates(int x, int y, int z) {
        int res;
        res =pow(x, 2) + pow(y, 2) + pow(z, 2);		//제곱
        return sqrt(res);							//제곱근
    }
    ```
    - 함수오버로딩 중에서 디폴트 매개변수와 입력이 없는 순수한 함수정의가 있을 때 
    입력없는 함수 호출시 문제가 발생한다. 
    ```c++
    #include <iostream>

    int func(int n = 0){
        return n * n;
    }

    int func() {
        return 10;
    }
    int main(void) {

       // std::cout << func() << std::endl;   에러난다. E0308
        return 0;
    }
    ```

- 01-5 이름공간 
    - 이름공간 기반의 함수선언과 정의의 구분
    ```c++
    #include <iostream>
    namespace aName {

        void func() {
            printf("aName::func()\n");
        }
    }
    namespace bName {

        void func() {
            printf("bName::func()\n");
        }
    }
    namespace cName {

        void func() {
            printf("cName::func()\n");
        }
    }

    using namespace cName;
    int main(void) {

        aName::func();
        bName::func();
        func();
        return 0;
    }
    ```
    - 범위지정 연산자
        - 전역변수
        ```c++
        #include <iostream>
        int val = 100; //전역변수
        int main(void) {
            int val = 20; //지역변수
            val += 3; //지역변수 +3 

            std::cout << "지역변수val:" << val << std::endl;   //23

            ::val += 3; //전역변수 + 3
            std::cout << "전역변수val:" << ::val << std::endl;  //103

            return 0;
        }
        ```
        - 헤더파일 호출 [C++](./day31/scope.h) [C++](./day31/scope.cpp)
        ```c++
        #pragma once

        class A{
            int a;
        public :
            A(int aa);
            void AInfo();
        };
        ```
        ```c++
        /*
	    범위 SCOPE
        */
        #include <iostream>
        #include "scope.h"

        A::A(int aa) {					//std::cout<< 형태와 동일
            a = aa;
        }
        void A::AInfo() {
            std::cout << "a: " << a << std::endl;
        }
        int main(void) {

            A a=10 ; //A a(10);
            a.AInfo();



            return 0;
        }
        ```

- 02-3 참조자 
    - 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름
    - 자신이 참조하는 변수와 동일한 메모리 공간을 가진다.
    - 참조자 선언 표시 & 
    ```c++
    #include <iostream>
    using namespace std;

    void chFunc(int& rn);		//참조변수 선언

    int main(void) {

        int n = 10;
        std::cout << "호출 전 n : " << n << std::endl;
        chFunc(n);
        std::cout << "호출 후 n : " << n << std::endl;
        
        return 0;
    }

    void chFunc(int& rn) {
        rn = 20;
    }
    ```
    - **선언과 동시에 초기화 되어야함.**
    ```c++
    #include <iostream>

    int main(void) {

        int num = 10;
        int& ref = num;	//num의 메모리 공간에 ref라는 별명이 붙는다.
        int* pn = &num; //포인터변수 선언
        
        //int& rref;    //선언과 동시에 초기화가 되어야함.
        //rref = ref;

        num++;
        ref++;
        (*pn)++;

        std::cout << "num++: " << num << std::endl;  //num++: 13
        std::cout << "ref++: " << ref << std::endl;  //ref++: 13
        std::cout << "(*pn)++: " << *pn << std::endl; //(*pn)++: 13
        std::cout << "&num:" << &num << std::endl;  //&num:00000016A0CFF604
        std::cout << "&ref:" << &ref << std::endl;  //&ref:00000016A0CFF604

        return 0;
    } 
    ```
    - 참조자의 수에는 제한이 없으며, 참조자를 대상으로도 참조자를 선언할 수 있다.  [C++](./day31/ref3.cpp)
    ```c++
    int num = 10 , num2 = 100;
    int& ref = num;	
    int* pn = &num; 

    int& rref = ref;
    std::cout << "rref:" << rref << std::endl;  //rref:10
    rref = num2;
    std::cout << "rref:" << rref << std::endl;  //rref:100
    ```

    - **상수레퍼런스(const 자료형  & )로 상수 참조자** [C++](./day31/ref4.cpp)  [C++](./day31/ref5.cpp)
    ```c++
    int n = 10;
    //int& ref = 10;   //참조자는 변수에 대해서만 선언이 가능하다.
    const int& ref = 10;   // 임시객체를 저장할 수 있는 공간이 생성된다.
    std::cout << "ref:" << ref << std::endl; //10
    ```
    - 함수의 출력값에 따른 경우
        - 함수 리턴값이 상수인 경우, 자료형 변수 또는 const 참조자;
        ```c++
        /*함수 리턴값이 상수*/
        int func(int anum) {
            anum++;
            return anum;     //리턴값은 상수이다.
        }

        int main(void) {

        int num = 10;
        int res = func(num);
        //int& res1 =func(num);   // 함수종료시 지역변수 anum은 사라짐
        const int& res1 =func(num);   // 리턴값을 상수레퍼렌스로 상수참조자
        
        std::cout << "num:" << num << std::endl;  //10
        std::cout << "res:" << res << std::endl;  //11
        std::cout << "res:" << res1 << std::endl; //11
        return 0;
        }

        ```
         - 함수 리턴값이 참조자인 경우, 자료형 변수 또는  참조자;
    
        ```c++
        /*함수 리턴값이 참조자*/
        int& func(int& anum) {
        anum++;
        return anum;				//리턴값은 참조자이다.
        //return anum++;  //rvalue이므로 참조할 수 없다. 참조자는 lvalue이어야한다.
        }

        int main(void) {

            int num = 10;
            int& res1 = func(num);      // res1은 참조자anum을 참조한다.
            int& res2 = res1;
            int res = func(num);
            std::cout << "num" << num << std::endl;
            std::cout << "res2" << res2 << std::endl;
            std::cout << "res" << num << std::endl;
            return 0;
        }

        ```


- 02-5 new , delete  메모리동적할당 
    - 여러 개의 메모리를 처리하려면 포인터 배열([C](./day31/new.cpp)), 하나의 메모리만 처리하려면 포인터 변수([C](./day31/new1.cpp))를 사용하면 됩니다. 
    - 메모리동적할당 
        - 자료형 포인터 = new 자료형의 크기;
        - delete 포인터;
        ```C++
        int *pn = new int; //힙영역에 int크기로 동적할당을 받는다.
        delete pn;

        int size=5;
        int* pary = new int[size];
        pary[0] = 1;
        *(pary+1) = 2;
        delete[] pary;
        ```
    - `생성자 - 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드`
    - **new - 생성자를 호출한다. new는 생성자를 호출이 되므로 초기화가 가능하다.**
    ```c++
    int* parr;
	parr = new int[3] {10, 20, 30};  //new는 생성자를 호출이 되므로 초기화가 가능하다.
    ```
- 03-1 구조체
    - C언어 구조체 [C++](./day31/struct_c.cpp)
    - C++구조체 [C++](./day31/struct_c++.cpp)
    ```c++
    #include <iostream>
    
    
    typedef struct human {
    
        char name[100];
    	int age;
    	char job[20];
    	
    	void showHuman() {
    		printf("name:%s, age:%d, jog:%s\n", name, age, job);
    	}
    }Human;
    
    int main(void) {
    
    	Human h = { "김철수",30,"백수" };
    	h.showHuman();
    
    	return 0;
    }
    ```
    - 구조체를 클래스 형태로 변환 [C++](./day31/struct_c++2.cpp)
        - 아래코드 생성자 코드 필요!!
        ```c++
        #include <iostream>

        class Human {
        public:   //외부접근 허용
            char name[100];
            int age;
            char job[20];


            //디폴트 생성자 (클래스명과 동일, 출력이 없다.)
            Human() {
                
            }

            void showHuman() {
                printf("name:%s, age:%d, jog:%s\n", name, age, job);
            }
        };
        int main(void) {

            Human h = { "김철수",32,"백수" };
            h.showHuman();

            return 0;
        }
        ```
## 32일차(3/19)
- 참조자 실습 
    - 상수참조자인 경우, 값변경 불가 [c++](./day32/prac_ref2.cpp)
    - 상수참조자를 통해 리터럴상수 연산  [c++](./day32/prac_ref6.cpp)
    - 반환형이 참조형인 경우 , 참조자변수일때 [C++](./day32/prac_ref4.cpp), 변수일때 [C++](./day32/prac_ref3.cpp)
    - 함수 내 지역변수를 참조자로 반환할 경우, 지역변수는 함수종료 후 소멸되기에 쓰레기값이다. [C++](./day32/prac_ref5.cpp)
    - const포인터와 const참조자 [C++](./day32/prac_ref7.cpp)
        - ref는 포인터 p를 참조하므로 ref와 p의 주소는 동일하다. =>*p == *ref
        ```C++
        #include <iostream>

        int main(void) {

            const int num = 12; //상수이므로 직접 변경 불가능, 포인터 변수나 참조자로 값 변경해야함
            const int* p = &num;   //데이터상수 (주소변경가능, 값변경 불가)
            
            const int* (&ref) = p;  
            std::cout << "포인터 변수 p가 가리키는 값: " << *p << std::endl;
            std::cout << "참조자 ref: " << *ref << std::endl;

            return 0;
        }
        ```
- 동적할당 + 참조자 실습 [c++](./day32/prac_newdelete2.cpp)
    - 동적할당은 포인터 변수
    - 포인터변수의 값을 참조
    ```c++
    Point &ref = *p;
    //p가 가리키는 값 = ref
    //p의 주소 = ref의 주소

    //p의 동적할당해제 = ref의 주소의 동적할당 해제

    ```
    ```c++
    #include <iostream>
    typedef struct __Point {
        int x;
        int y;
    } Point;
    
    Point& PntAdder(const Point& p1, const Point& p2) {
        Point* p  = new Point;
        p->x = p1.x + p2.x;
        p->y = p1.y + p2.y;
        return *p ;
    }

    int main(void) {
        Point* p = new Point;
        Point* q = new Point;
    
        (*p).x = 1;
        (*p).y = 2;
        (*q).x = 3;
        (*q).y = 4;
    
        Point& ref = PntAdder(*p, *q);  // PntAdder 함수에서 참조 반환
        std::cout << "두 점의 합(x, y): " << ref.x << " " << ref.y << std::endl;
    
        // 동적 할당 해제
        delete p;
        delete q;
        delete &ref; 
        return 0;
    }

    ```
- **문자열처리하기 -strcpy()**[C++](./day32/문자열처리하기.cpp)
- 03-2 클래스와 객체
    - 객체와 인스턴스
    - 인스턴스 -어떤 클래스로부터 만들어진 객체
    - `객체를 생성하기 위해는 생성자호출이 필요하다.`
    - 클래스
        - 구성요소
            - 접근제어 지시자(private, public, protected)
            - 멤버변수 - private
            - 멤버함수  - public
        - 클래스 내에 선언된 변수는 클래스 내에 선언된 함수에서만 접근 가능하다.
        - 클래스명의 첫글자는 대문자이다.
        - 생성자는 멤버함수이다.
        - 클래스의 인스턴스 객체 선언 후 멤버함수의 생성자로 초기화한다.
    - 생성자
        - 클래스명과 동일
        - 출력자체가 없다. void도 적지 않는다. 
        - `디폴트 생성자 호출은 괄호 생략해야한다. 이유는 main함수내에서의 함수선언 식과 구분하기 위해서이다.`(교재 172쪽)
        ```c++
        class AClass {

        private :
            int n1;
            int n2;
        public :
            AClass(){}

        };

        int main(void) {

        AClass b; //디폴트 생성자
        AClass b2 =  AClass(); //디폴트 생성자
        //AClass b3(); //함수원형과 헷갈리기에 에러난다.
        //AClass b(200, 400); //입력이 2개인 생성자는 정의되어있지 않다. 에러(E0289)
        return 0;
        }
        ```


        - 사용자 정의 생성자가 정의되고 디폴트생성자가 정의되지 않을 경우, 디폴트생성자 객체 생성 안된다.
        ```c++
        #include <iostream>


        class MyClass {

        private :
            int m_num1;
            int m_num2;

        public :
            MyClass(int a, int b) {
                m_num1 = a;
                m_num2 = b;
            }

            void printData() {
                std::cout << "나는 MyClass의 인스턴스입니다. ";
                std::cout << "m_num1: " << m_num1 << " m_num2: " << m_num2 << std::endl;
            }
        };
        int main(void) {
            //MyClass obj; //디폴트 생성자가 없다는 에러 E0291
          
            MyClass obj2(100, 200);
            obj2.printData();
            return 0;
        }
        ```
        - 생성자 오버로딩 - 함수명 동일, 매개변수(개수, 값) 다름
        ```C++
        #include <iostream>


        class MyClass {

        private :
            int m_num1;
            int m_num2;

        public :
            MyClass(){}

            MyClass(int a, int b) {
                m_num1 = a;
                m_num2 = b;
            }
        
        };
        ```
    - 소멸자 ~
        - 클래스의 이름 앞에 '~'가 붙은 형태의 이름을 갖는다.
        - 출력자체가 없다. void도 적지 않는다.
        - 매개변수는 void형으로 선언되어야 하기에 오버로딩도, 디폴트 값 설정도 불가능하다.
        - 직접 소멸자를 정의하지 않으면, 디폴트생성자와 마찬가지로 아무런 일도 하지 않는 디폴트 소멸자가 자동으로 삽입된다.
        - 소멸자는 대개 생성자에서 할당한 리소스의 소멸에 사용된다.(delete연산자 이용)
        - `동적할당 경우 말고는 별도로 작성할 필요가 없다. 동적해제를 소멸자 함수에서 한다.`
    - 클래스 실습
        - 멤버변수가 str일 때, set함수로 [c++](./day32/MyClass.cpp)
        - 멤버변수 str일 때, 생성자로  [c++](./day32/MyClass2.cpp)
        - 멤버변수 str일 때, 생성자 + 동적할당 [c++](./day32/MyClass3.cpp)
        - ` C++에서 생성자에서 배열의 주소를 포인터로 받을 때 const를 사용하는 이유:  배열의 값이 변경되지 않도록 보호/ const를 사용하면 해당 포인터가 가리키는 메모리의 값을 수정할 수 없게 됩니다. `
        - `strlen(배열이름)은 배열의 첫 번째 요소의 주소를 반환하는 포인터를 사용하여 문자열의 길이를 구합니다`
        - `동적 메모리 할당을 통해 포인터가 문자열을 가리키는 경우에도 strlen(포인터)를 사용하여 문자열의 길이를 계산할 수 있습니다.`
            ```c++
            MyClass(int i_id, const char* i_name, int i_age){   // const 포인터변수인 이유는 데이터상수 목적으로 (값변경 불가)
                id = i_id;

                //std::cout << strlen(i_name) << std::endl;
                name = new char[strlen(i_name)+1];  // 포인터변수=배열이름=배열의 첫번째주소 =>str(배열이름)   
                                                    // 동적 메모리 할당 시 +1을 하는 이유는 널 종료 문자(null terminator, '\0')를 저장하기 위해서입니다.
                strcpy(name, i_name);



                age = i_age;
            }
            ```
        - 범위지정:: , const , mutable  [c++](./day32/MyClass3copy.cpp)
            - `클래스밖에서 멤버함수 정의할 때, 범위지정::`
            - printData()함수는 출력만 하는 역할이니 값변경 하면 안 되므로 const
            - mutable 
            ```c++
            #define _CRT_SECURE_NO_WARNINGS
            #include <iostream>

            class MyClass {

            private:
                int id;
                char* name;
                mutable int age;

            public:
                MyClass() {}

                MyClass(int i_id, const char* i_name, int i_age);

                void printData () const;

                ~MyClass() {

                    delete[] name;
                }
            };

            int main(void) {

                MyClass m(5, "오수아", 32);
                m.printData();

                return 0;

            }


            MyClass::MyClass(int i_id, const char* i_name, int i_age) {  
                id = i_id;

                name = new char[strlen(i_name) + 1];  
                strcpy(name, i_name);

                age = i_age;
            }

            void MyClass:: printData() const{           //상수 멤버함수(모든 멤버들을 상수화 시킨다.)
                std::cout << "MyClass의 인스턴스입니다.";
                std::cout << "아이디: " << id << " 이름 :" << name << " 나이: " << age << std::endl;
               //id = 2;   //상수함수라서 id, name, age는 상수이기에 lvaule가 될 수 없다.
                age = 25;  //상수함수라서 age도 상수여야하지만 클래스 멤버변수에서 mutable을 통해 상수화를 막기에 lvalue가 변수라서 될 수 있다.
            }
            ```
        
- 초기화
    - **상수와 참조자는 선언과 동시에 초기화가 되어야한다.**
    - 초기화 유형
        ```c++
        #include <iostream>

        int main(void) {

            int num = 3;	// 복사초기하
            int num2(30);	//직접 초기화
            int num3{ 300 }; //중괄호 직접 초기화
            int num4 = { 3000 }; //중괄호 복사초기화

            int x = 3.14;
            int x1{3.14};		//double에서 int로의 변환에는 축소변환필요하다. 오류C2397

            std::cout << num << std::endl;
            std::cout << num2 << std::endl;
            std::cout << num3 << std::endl;
            std::cout << num4 << std::endl;
            std::cout << x << std::endl;     //3


            return 0;
        }
        ```
    - **이니셜라이져, 콜론 초기화 - 생성자 함수 머리에서 : 초기화**
        1. `상수 멤버변수를 가질 경우, 콜론 초기화`
        ```c++
        class ConstClass {

        private:
            int m_value;
            const int m_value2;   //상수멤버변수는 객체생성되기 전에 반드시 초기화가 되어야 함.

        public:
            ConstClass(int value, int value2) :m_value2(value2) { 
                m_value = value; /*m_value2 = value2;*/     //lvalue는 상수가 될 수 없다.
            } 

        };
        ```
        2. `참조자 reference 경우, 콜론 초기화`
        ```c++
        class RefClass {

        private:
            int& ref;

        public :
            RefClass(int& r) :ref(r) { }      //참조자 역시 객체가 생성되기 전에 반드시 초기화가 되어야 함.
            void showValue() {
                printf("참조자ref:%d", ref);
            }
        };
            int main(void) {
                int n = 50;
                RefClass obj(n);
                obj.showValue();
                return 0;
        }
        ```
        3. `멤버변수가 객체(class)인 경우, 콜론 초기화`
        ```c++
        #include <iostream>

        class Position {

        private:
            int m_x;
            int m_y;

        public:
            Position(int x, int y) { 
                printf("position객체 생성\n");
                m_x = x;
                m_y = y;
            }
            
            void getData() {
                printf("(x,y)=(%d,%d)\n", m_x, m_y);
            }
        };

        class ObjClass {
        private:
            Position pos;		//객체 멤버변수

        public :
            ObjClass(int x, int y) : pos(x, y) { printf("ObjClass객체 생성\n"); }   //ObjClass가 생성되기 전에 멤버변수로 Position객체가 생성되어야 한다. 
            void showValue() {
                pos.getData();
            }
        };

        int main(void) {

            ObjClass o(3,6);
            o.showValue();
            return 0;
        }
        ```
## 33일차(3/20)
- `자동으로 제공 :  디폴트생성자, 디폴트소멸자, 디폴트복사생성자`
- 05-01 복사생성자 ,05-02 깊은 복사, 얕은 복사
    - 자동으로 삽입이 되는 디폴트 복사 생성자
    ```c++
    /*
	복사생성자(copyConstructor)
    */
    #define _CRT_SECURE_NO_WARNINGS
    #include <iostream>
    class Person {

    private:
        int age;
        char name[20];

    public :
        Person(int i_age, const char* c){
            std::cout << "Constructor call~" << std::endl;
            age = i_age;
            strcpy(name, c);
        }
        void getData(){
            std::cout << "age: " << age << " , name: " << name << std::endl;
        }
    };


    int main(void) {
        Person p(20,"정해성");  //생성자 Person(int i_age, const char* c)
        p.getData();

        Person p2(p);	//디폴트 복사생성자
        p2.getData();

        Person p3 = p;  //디폴트 복사생성자
        p3.getData();

        return 0;
    }
    ```
    <img src='./images/디폴트복사생성자.png'>
   
    - 디폴트 복사생성자 명시적 [c++](./day33/copyContructor2.cpp)
        - **매개변수로 객체를 받을 수 없다. 복사생성자가 무한반복되기 때문이다.**
        - **매개변수로 객체를 받을려면 상수 참조연산자 (const & )를 적어야한다.**
        ```c++
        Person(const Person& other) {
            age = other.age;
            strncpy(this->name, other.name , strlen(other.name)+1 ) ;  //널문자포함
        }
        ```
    - 디폴트 복사생성자 명시적 동적할당 +깊은복사  [c++](./day33/copyContructor3.cpp)
        - 동적할당은 char* c , c = new char[size] , strcpy(c, "문자열"), delete [] c 
        - 생성자로 만든 인스턴스 p, 복사생성자로 만든 인스턴스 p2는 주소는 다르지만 값은 같다.
        - 깊은 복사일 경우, 동적할당해제는 각각 된다.
        - 얕은 복사일 경우, 동적할당이 같은 곳을 가리키기에 하나의 인스턴스가 사라지면 나머지 하나의 동적해제에서 에러난다.

- 그 외 생성자
    - 변환생성자 
        - 다른 타입의 객체로 변환될 때 자동으로 호출되는 생성자
        - 입력을 한개만 가지는 생성자와 유사
            ```c++
            #include <iostream>


            class Time {

            private:
                int hour;
                int min;
                int sec;

            public:
                Time() {	}
                Time(int abssec) {
                    hour = abssec / 3600;
                    min = (abssec / 60) % 60;
                    sec = abssec % 60;
                }
                void printTime() {
                    printf("현재시간은 %d시 %d분 %d초 입니다.\n", hour, min, sec);
                }
            };

            int main(void) {
                //Time now(9999);	//매개변수가 1개인 생성자
                Time now = 9999;   //변환생성자 (int -> Time)
                now.printTime();
                return 0;
            }

            ```
        - 변환에 의한 초기화(변환생성자)는 explicit으로 막을 수 있다.
            ``` c++
            /*
            explicit - 변환생성자 못함. 
            */

            #include <iostream>

            class MyClass {

            private:
                int value;

            public:
                explicit MyClass(int value) {
                    std::cout << "변환생성자 호출" << std::endl;
                    this->value = value;
                }
                void printMyClass() {
                    std::cout << "value: " << value << std::endl;
                }
            };
            int main(void) {
                
                //MyClass obj = 10;		//변환생성자
                //obj.printMyClass();

                MyClass obj2(20);		//생성자
                obj2.printMyClass();
                return 0;
            }
            ```
    - 이동생성자 [c++](./day33/moveConstructor2.cpp)
        - 이동 생성자는 r-value 참조(&&)를 파라미터로 받으며, 자원을 복사하는 대신 이동시키는 방식으로 성능을 최적화합니다.
        ```c++
        /*
            이동생성자(&&)
            r-value 참조를 파라미터로 갖는 이동 생성자
        */
        #define _CRT_SECURE_NO_WARNINGS
        #include <iostream>

        class Human {
        private:
            char name[10];
            int age;
        public:
            //입력이 2개인 생성자 (생성자 오버로딩)
            Human(const char* name, int age) {
                std::cout << "입력이 2개인 생성자(생성자 오버로딩)" << std::endl;
                strcpy(this->name, name);
                this->age = age;
            }
            //복사생성자
            Human (const Human& other){
                std::cout << "복사생성자(const, 참조연산자&)" << std::endl;
                strcpy(this->name, other.name);
                this->age = other.age;
            }
            //이동생성자 - 값 복사가 아니라 값이 이동이다.
            Human(Human&& other) noexcept{
                std::cout << "이동생성자(r-value참조)" << std::endl;
                strcpy(this->name, other.name);
                this->age = other.age;
            }
            void printHuman() {
                printf("[이름|나이] %s %d\n", this->name, this->age);
            }
        };
        int main(void) {
            
            Human h("day6", 4);
            std::cout << "h의 주소" << &h << std::endl;  //h의 주소0000002773B8F698
            h.printHuman();
            Human h2(h);
            std::cout << "h2의 주소" << &h2 << std::endl; //h2의 주소0000002773B8F6C8
            h2.printHuman();
            Human h3(std::move(h));
            std::cout << "h3의 주소" << &h3 << std::endl; //h3의 주소0000002773B8F6F8
            h3.printHuman();
            return 0;
        }
        ```

## 34일차(3/21)
- **함수의 매개변수로 사용자 정의 클래스 객체(인스턴스)가 들어갈 때는 참조로 받는 것이 효율적입니다**
- C++에서 기본 자료형(int, float, double, char, 등)을 함수 매개변수로 받을 때는 값으로 받는 것과 참조로 받는 것 사이에 큰 성능 차이가 없습니다.
- nullptr은 "이 포인터는 아무것도 가리키지 않는다" 라는 의미를 정확하게 전달합니다.
- 함수에 const를 붙이는 의미 - 그 함수 내부에서 멤버 변수를 변경할 수 없게 됩니다.
    ```c++
    //const 멤버 함수 특징
        //이 함수는 멤버 변수를 수정할 수 없음
        void showValue() const { 
            std::cout << "Value: " << m_value << std::endl;
        }

        // 이 함수는 멤버 변수를 변경할 수 있음 (const 없음)
        void setValue(int value) {  
            m_value = value;
        }
    ```

- 클래스 멤버함수에서 객체 덧셈 함수 
    - return값이 객체인 경우 [c++](./day34/operator3.cpp)
    ```c++
    public:
        //생성자
        Position(int ax=0, int ay=0) : x(ax),y(ay) {}
        //덧셈함수
        Position add(const Position& other){
            return Position(x+other.x , y+ other.y);
        }
    ```
    - return값이 참조인 경우  [c++](./day34/operator4.cpp)
    ```c++
    public:
        //생성자
        Position(int ax=0, int ay=0) : x(ax),y(ay) {}
        //덧셈함수
        Position& add(const Position& other){
            x += other.x;
            y += other.y;
            return *this;
        }
    ```
- 오버로딩 - 매개변수 타입, 개수가 다름 ,
    - 함수오버로딩 -매개변수 타입, 개수가 다름 /함수명 동일 /반환값은 관계없음
    - 생성자오버로딩 - 생성자명동일(클래스명) /매개변수 타입과 개수 다름
    - 연산자오버로딩


- 10-1 연산자 오버로딩
    - 필요성
        - 내장된 자료형 (int, char, 배열) 등은 대입연산, 산술연산 등이 가능하다.
        - `사용자 정의 자료형(class)에서 연산에 관련된 것을 가능하도록 하기 위해서이다`
        
    -  컴파일러가 자동으로 제공하는 "디폴트 대입 연산자(기본 대입 연산자)"를 호출 
         ```c++
        #define _CRT_SECURE_NO_WARNINGS
        #include <iostream>

        class MyClass {

        private:
            int m_a, m_b;
            const char* m_name;

        public:
            /*
            nullptr은 "이 포인터는 아무것도 가리키지 않는다" 라는 의미를 정확하게 전달합니다.
            nullptr은 nullptr_t 타입을 가지므로, 정수(int 등)로 변환되지 않아 의도치 않은 동작을 방지합니다
            */
            MyClass(int a =0 , int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) {
            
            }

            void showMyClass() {
                std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
            }
        };

        int main(void) {

            MyClass obj(3, 21, "window");
            obj.showMyClass();

            /*
            클래스 MyClass에는 명시적으로 기본 생성자가 정의되어 있지 않지만, 
            모든 매개변수에 기본값이 제공된 생성자 가 있기 때문에, 
            이를 이용하여 기본 생성자가 자동으로 제공됩니다.
            */
            MyClass obj2;
            obj2 = obj;		// 연산자 오버로딩을 사용한 것이 아니라, 컴파일러가 자동으로 제공하는 "디폴트 대입 연산자(기본 대입 연산자)"를 호출
            obj2.showMyClass();
            return 0;
        }
        ```

    - 연산자 오버로딩을 통해 operator+를 직접 정의 
        -  C++에서 클래스에 대한 덧셈(+) 연산자는 기본적으로 제공되지 않기 때문입니다. [C++](./day34/operator2.cpp)
        1. 멤버함수에 의한 연산자 오버로딩  p1 operator+ (p2)
        ```c++
        MyClass operator+(const MyClass& other) {
            return MyClass(value+other.value);
        }

        ```
        ```c++
        MyClass& operator+(const MyClass& other) {
            value += other.value;
            return *this;
        }
        ```

        ```c++
        
        int main(void){

            Myclass obj(10);    //입력이 1개인 생성자
            MyClass obj2 (obj); //복사생성자
            MyClass obj3 = obj2 //복사생성자

            Myclass obj4  = obj + obj2 ; //연산자 오버로딩 + 복사생성자
            //Myclass obj4  = obj.operator+(obj2) ; 
            
            //  MyClass operator+(const MyClass& other)  로 obj4생성하면 main함수 내 객체생성이 총 5번
             //MyClass& operator+(const MyClass& other)로 obj4생성하면 main함수 내 객체생성이 총 4번
        }
        ```

        2. 전역함수에 의한 연산자 오버로딩 operator+ ( p1 ,p2)  [c++](./day34/operator7.cpp)
            - inline 함수의 동작 원리 - 함수의 호출이 "호출"이 아니라, 그 함수의 코드 자체로 대체된다는 것입니다.
            ```c++
            inline Point operator+(int n, const Point& other);  //함수선언

            int main(void) {
                Point obj(10, 20);
                
                //전역함수
                Point obj2 = operator+(20 ,obj);    //함수의 호출이 "호출"이 아니라, 그 함수의 코드 자체로 대체된다는 것입니다.
                obj2.showPoint();

                return 0;
            }
            //함수정의
            inline  Point operator+(int n , const Point& other){
                return Point(n + other.x, n + other.y);
            }
            ```
            - **전역 함수로 연산자 오버로딩을 할 때, 참조 반환 (&)을 사용하려면 지역 객체를 반환할 수 없습니다.**
                - 함수 내부에서 생성한 지역 객체는 함수가 끝나면 소멸됩니다.
                - 따라서 지역 객체의 참조를 반환하면 함수가 종료된 후 해당 참조가 가리키는 메모리는 사라지므로 잘못된 참조(lvalue)가 됩니다.
            - **객체를 반환할 때는 보통 값 반환이 가장 안전한 방법이다.**
             <img src ='./images/연산자오버로딩방법2가지.png'>
             <img src='./images/멤버함수연산자오버로딩.png'>
             <img src='./images/전역함수연산자오버로딩.png'>
    -  friend 키워드 [c++](./day34/operator8.cpp)
        - private로 선언된 멤버변수를 전역함수에서 접근하려면 friend를 앞에 적고 함수선언을 멤버함수 내에서 해줘야 한다.
        ```c++
            #include <iostream>

            class Complex {

            private:
                double real, image;

            public:
                Complex(double r = 0, double i = 0) :real(r), image(i) {}

                Complex operator+(const Complex& other) {
                    return Complex(real + other.real, image + other.image);
                }

                /*함수원형에 freind선언을 하면 private 또는 protected 멤버변수 접근 가능*/
                friend Complex operator*(int n, const Complex& other);
                
                void showComplex() {
                    printf("%.1lf %.1lf\n", real, image);
                }

            };

            inline Complex operator*(int n, const Complex& other) {
                return Complex(n * other.real, n * other.image);
            }
        ```
        - 특정 함수나 다른 클래스를 friend로 선언하면 private 멤버에 접근 가능.
        - 보통 외부 함수 또는 다른 클래스가 내부 데이터를 직접 조작할 수 있도록 할 때 사용.

    - 연산자 오버로딩을 통해 operator<<를 직접 정의 
        - C++의 std::cout은 기본 데이터 타입(int, double, char 등)에 대해서는 << 연산자를 제공하지만, 사용자 정의 클래스(예: Complex 객체)는 기본적으로 지원하지 않음
        - **출력 연산자는 반드시 std::ostream&을 반환해야 한다!**
        - 전역 함수 연산자 오버로딩은 객체를 반환하는 경우가 많지만, operator<<은 예외적으로 std::ostream&을 반환
        <img src='./images/출력연산오버로딩결과는참조반환.png'>

        ```C++
        // 출력 연산자 오버로딩 함수
        inline std::ostream& operator<<(std::ostream& out, const Complex& other) {
            out << other.real << ", " << other.image;
            return out;
        }
        ```
       <img src='./images/출력오버로딩1.png'>
        ```C++
        Complex c(1.1, 2.2);
        std::cout << c << std::endl;
        ```
       <img src='./images/출력오버로딩2.png'>

       1. 출력연산자 오버로딩 + private , friend 키워드
        ```c++
        #include <iostream>

        class MyClass {
        private:
            int value;
        public:
            MyClass(int n) :value(n){}
            friend std::ostream& operator<< (std::ostream& out, const MyClass& other);
        };

        std::ostream& operator<< (std::ostream& out, const MyClass& other) {
            out << other.value;   //private 멤버변수 접근 위해 friend 필요하다.
            return out;
        }
        int main(void) {
            MyClass obj(41);
            std::cout << obj << std::endl;   //출력 연산자 오버로딩 필요하다.
            return 0;
        }
        ```
        2. 출력연산자 오버로딩 연쇄출력 [c++](./day34/coutOperator2.cpp)
        ```c++
        /*연쇄출력*/
        /*출력 연산자 오버로딩*/
        #include <iostream>

        class Money {
        private:
            int money;
        public:
            Money(int m = 0) : money(m) {}  // 생성자

            // 출력 연산자 오버로딩
            friend std::ostream& operator<<(std::ostream& out, const Money& other) {
                out << "현재 금액: " << other.money;
                return out;  // 출력 스트림을 반환하여 연쇄 출력이 가능하도록 함
            }
        };

        int main() {
            Money m1(10000), m2(20000), m3(30000);

            // 연쇄 출력: 여러 개의 출력이 한 줄로 연결되어 출력됨
            std::cout << m1 << ", " << m2 << ", " << m3 << std::endl;

            return 0;
        }

        ```
    - 연산자 오버로딩 깊은 복사 [C++](./day34/Human2.cpp)
        - 기본적으로 C++에서 컴파일러가 제공하는 디폴트 대입 연산자는 얕은 복사(Shallow Copy)입니다.
        - 주의할 점
            - char * name이 초기화되지 않아 쓰레기 값(잘못된 포인터 주소)을 가질 가능성이 높아.
                - xman이 생성될 때, name에 nullptr이 아닌 쓰레기 값이 들어갈 수 있음.
                - operator=를 호출하면, delete[] name;이 실행됨.
                - 하지만 name이 올바른 메모리를 가리키지 않으면 런타임 오류(크래시) 발생!
            - 기존 메모리 해제 
            ```c++
            //#define _CRT_SECURE_NO_WARNINGS
            #include <iostream>
            class Human {
            private:
                char* name;
                int age;
            public:
                Human(const char* pn = nullptr, int i_age =0)   {
                    std::cout << "생성자" << std::endl;
                    age = i_age;
                    
                    if (pn) {
                        name = new char[strlen(pn) + 1];
                        strcpy(name, pn);
                    }
                    else {
                        name = new char[1];
                        name[0] = '\0';
                    }   
                }

                Human(const Human& other) {
                    std::cout << "복사생성자" << std::endl;
                    name = new char[strlen(other.name) + 1];
                    strcpy(name, other.name);
                    age = other.age;
                }

                ~Human() {
                    std::cout <<"소멸자" << std::endl;
                    delete[] name;
                }

                //깊은 복사- 대입연산자 오버로딩
                Human& operator= (const Human& other) {
                    if (this != &other) {  // 자기 자신 대입 방지
                        delete[] name;  // 기존 메모리 해제 (중요!)

                        name = new char[strlen(other.name) + 1];  // 새로운 메모리 할당
                        strcpy(name, other.name);
                        age = other.age;
                    }

                    return *this;
                }

                void showHuman() {
                    std::cout << name << ", " << age << std::endl;
                }
            };


            int main(void) {
                Human man("홍명보", 30);		//생성자
                man.showHuman();

                Human copyman(man);				//복사생성자
                copyman.showHuman();

                Human xman;
                xman=copyman;				//대입연산자 호출 - 얕은 복사면 에러나기에 대입연산자 오버로딩 필요하다.
                xman.showHuman();
                return 0;
            }
            ```
    - 연산자 오버로딩이 불가능한 연산자의 종류
        - . 멤버접근 연산자
        - .* 멤버 포인터 연산자
        - :: 범위지정 연산자
        - ?: 조건연산자
        - sizeof 바이트 단위 크기 계산
        - typeid RTTI 관련 연산자
        - static_cast, dynamic_cast, const_cast, reinterpret_cast 형변환 연산자

- 10-2 단항연산자 오버로딩
    - operator++와 operator--는 객체의 값을 증가/감소
    - operator-는 객체 값의 부호를 반전시키는 데 유용합니다.
    - operator!는 논리 부정 연산을 할 수 있게 하며, operator~는 비트 반전을 처리할 수 있습니다.
    - operator()는  함수 호출 연산자
    1. operator()
    ```c++
    #include <iostream>

    class Money {

    private:
        int money;
    public:
        Money(int m=0) :money(m) {}   //생성자

        int operator()() {            //단항연산자 오버로딩 - 매개변수 없는 경우
            return money;
        }

        void operator()(int m) {		 //단항연산자 오버로딩 - 매개변수 있는 경우
            money += m;
        }
    };

    int main(void) {
        Money m;			// 생성자로 인스턴스 생성
        printf("money: %d\n", m.operator()());
        
        m(1000);     // m.operator()(1000)과 동일
        printf("money: %d\n", m.operator()());


        return 0;
    }
    ```
- 매크로 함수와 인라인 함수
    1. 매크로 함수
        - #define을 사용하여 코드의 특정 부분을 자동으로 치환하는 방식
        - 매크로는 전처리기에서 실행되므로, 컴파일 전에 코드가 변환되는 특징
        - `매크로는 매개변수들을 괄호로 감싸서 계산해주어야 합니다. 그렇지 않으면 연산 순서가 잘못될 수 있습니다`
        
        ```c++
        #define ADD(a, b)  ((a) + (b))

        #define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

        #define MAX(a, b) ((a) > (b) ? (a) : (b))
        #define MIN(a, b) ((a) < (b) ? (a) : (b))

        #define SQUARE(x) ((x) * (x))

        #define LOG_INFO(msg) std::cout << "[INFO] " << msg << std::endl;
        ```
        - C++에서 문자열 리터럴을 연속으로 나열하면 자동으로 하나의 문자열이 됨.
            - #(해시기호) -  매크로의 인자를 문자열로 변환함
            - ##(더블 해시 기호) - 매크로의 인자들을 토큰 결합함.
            ``` C++
            #define ADD(a, b)   #a"+"#b   
            #define CONCAT(a, b) a ## b  // 매크로가 두 인자를 결합해서 하나의 변수명으로 만듦.

            int main() {
                int xy = 10;  // "x"와 "y"가 결합된 변수명 "xy"
                
                printf("ADD(a,b):%s\n", ADD(10, 20));  //10+20
                std::cout << CONCAT(x, y) << std::endl;  // "xy"라는 변수명 출력
                return 0;
            }
            ```

    2. 인라인 함수
        - 함수 호출을 실제 코드로 교체하는 기법
        - 함수 내용을 호출하는 위치에 직접 삽입하는 방식으로 동작합니다.
        ```C++
        #include <iostream>

        inline int func(int x) {				//인라인 함수
            return x * x;
        }
        int main(void) {
            /*
             컴파일러가 x * x로 대체하고, 실제로는 func(2)라는 함수 호출이 일어나지 않습니다.
            */
            std::cout << func(2) << std::endl;  //4
            return 0;
        }
        ```

- 13-1 템플릿 
    - 템플릿은 선언과 함수정의가 분리될 수 없다.  
    1. 함수 템플릿 기본 [C++](./day34/templete2.cpp)
        1. 템플릿 선언 일반화
        ```c++
        template <typename T>	
        T func(T a, T b) {
            std::cout << "T" << std::endl;
            return a + b;
        }
        ```
        2. 템플릿 특수화
        ```c++
        template<>				//템플릿 특수화- 템플릿 일반화 중 특별한 타입만 처리
        int func<int>(int a, int b) {
            std::cout << "int" << std::endl;
            return a + b;
        }
        ```
    2. 함수 템플릿의 typename이 여러개인 경우 [C++](./day34/templete3.cpp)
        ```c++
        template <typename T, typename T2>
        void func(T a, T2 b) {
            std::cout << a << std::endl;
            std::cout << b << std::endl;
        }
        ```
    3. 클래스 템플릿 기본
        - `인스턴스 생성시 반드시 typename을 작성해야한다.`
        ```c++
        template < typename T>
        class CTemplete {
        private:
            T data;
        public:
            CTemplete(T d) : data(d){}
            T getData() {
                return data;
            }
        };

        #include <iostream>

        int main(void) {
            CTemplete<int> obj(100);
            printf("data: %d\n", obj.getData());

            CTemplete<std::string> obj2("클래스템플릿테스트");
            std::cout << "data: " << obj2.getData() << std::endl;
            return 0;
        }

        ```
    - `std::string을 사용하는 이유`
        <img src ='./images/char[]과stdstring.png'>
        <img src ='./images/c++에서stdstring사용하는 이유.png'>

    
    4. 클래스 템플릿 일반화, 특수화 [c++](./day34/templete5.cpp)
    ```c++
    #include <iostream>

    template <typename T>
    class CTest {				//클래스 템플릿 일반화
    private:
        T num;
    public:
        CTest (T n) : num(n){}
        T getData() { 
            return num;
        }

    };

    template <>	
    class CTest<char> {				//클래스 템플릿 특수화
    private:
        char data;
    public:
        CTest(char d) : data(d){}
        char getData() {
            return data;
        }

    };


    int main(void) {
        CTest<int> obj(10);	//클래스 템플릿은 인스턴스 생성시 반드시 typename을 작성해야 한다.
        std::cout << obj.getData() << std::endl;
        
        CTest<char> obj2('a');
        std::cout << obj2.getData() << std::endl;
        return 0;
    }
    ```

    5. 템플릿을 사용하여 배열을 다루는 클래스를 구현 [C++](./day34/templete6.cpp)
    ```C++
    #include <iostream>

    template <typename T , int sz>
    class CTest {
    private:
        T ary[sz];
    public:
        // 배열 인덱스 접근 연산자 오버로딩
        /*
        T& operator[](int idx)에서 반환 타입이 T& (즉, 참조 타입)인 이유는 
        해당 인덱스에 있는 값을 수정 가능하게 하기 위함입니다.
        */
        T& operator[](int idx) {
            if (idx < 0 || idx >= sz) {
                std::cout << "error" << std::endl;
                exit(1);
            }
            return ary[idx];
        }

        void printData() {
            for (int i = 0; i < sz; i++) {
                std::cout << ary[i] << std::endl;
            }
        }
    };
    int main(void) {
        CTest<int, 5> obj;
        obj.operator[](0) = 10;
        obj[1] = 11;
        obj[2] = 20;
        obj[3] = 50;
        obj[4] = 55;
        obj.printData();

        return 0;
    }
    ```


## 35일차(3/24)
- 생성자 
    - 기본 생성자와 입력 1개 받는 생성자에 디폴트 값이 있는 경우에서 기본생성자가 두개 있다고 에러난다.
    - 기본 생성자가 없고 입력을 1개 받는 생성자가 있을 때, MyClass obj;는 자동으로 입력 1개인 생성자를 호출하려고 시도합니다. 하지만 이 경우, 디폴트 값을 사용하지 않으면 컴파일러가 해당 생성자에 대한 인자를 제공하지 않아서 오류가 발생합니다.
    - 기본 생성자 호출은 괄호 생략
    ```c++
    MyClass obj;
    ```
- 포인터변수 동적할당
    -  delete ptr;은 ptr이 가리키던 힙 메모리를 해제합니다. 이때 ptr은 이제 힙 메모리를 가리키지 않게 됩니다. 하지만 `ptr 자체는 여전히 존재하고, 다른 주소를 가리킬 수 있습니다.`
    - ptr = &obj;처럼 ptr에 새로운 스택 메모리 주소를 할당할 수 있습니다. 이때 ptr은 더 이상 해제된 힙 메모리를 가리키지 않고, 스택에 존재하는 obj 객체의 주소를 가리킵니다.
    ```c++
    MyClass* ptr = new MyClass(12);  //힙 메모리
    ptr->showMyClass();
    printf("value: %d\n", ptr->value);
    delete ptr;

    MyClass obj;    //스택 메모리
    ptr = &obj;
    ptr->showMyClass();
    printf("value:%d\n", ptr->value);
    ```

- 10-2 단항연산자 오버로딩 [c++](./day35/prac_operator.cpp)
    ```c++
    // 단항연산자오버로딩
    // 전위 연산자 (pre-increment)
    Point operator++() {
        ++x;
        ++y;
        return *this;  // 증가된 값을 반환
    }

    // 후위 연산자 (post-increment)
    Point operator++(int) {
        Point temp = *this;  // 현재 값을 저장
        x++;
        y++;
        return temp;  // 증가되기 전의 값을 반환
    }

    int main(void) {
        Point p(2, 4);
    std::cout << p << std::endl;         // 2,4
        std::cout << ++p << std::endl;   // 3,5      p.operator++() 호출됨
        std::cout << p++ << std::endl;   // 3,5      p.operator++(10) 호출됨
        std::cout << p << std::endl;     // 4,6

        return 0;
    }
    ```

    
- 07 상속
    - class 자식클래스명 : public 부모클래스명{};
    - 자식클래스 생성자에서 부모클래스 생성자 이니셜라이져 호출
    - is a (무엇은 무엇이다) , has a (소유) 관계
    - 부모클래스, 기초(base) 클래스 , 상위클래스 , 슈퍼클래스
    - 자식클래스, 유도(derived) 클래스 , 하위클래스 , 서브클래스
    1. 자식클래스의 객체 생성과정
        - 유도클래스의 객체생성 과정에서 기초 클래스의 생성자는 100% 호출된다.
        - `유도클래스의 생성자에서 기초 클래스의 생성자 호출을 명시하지 않으면, 기초 클래스의 void생성자가 호출된다.`
        ```c++
        class Human{
        private:
            char name[20];
            int age;
        public:
            Human(const char* , int);
        };

        class Student :public Human {
        private:
            int studentId;
        public:
            Student (const char*, int, int);
        }

        Human::Human(const char* aname, int aage){
            strcpy(name, aname);
            age= aage;
        }
        Student::Student (const char* aname, int aage, int studentId) : Human(aname, aage){
            this->studentId = studentId;
        }
        ```
        - 할아버지 -아빠 -자식 관계에서의 상속 [C++](./day35/inherit3.cpp)

    2. 유도클래스 객체의 소멸과정 [c++](./day35/inherit4.cpp)
        - 유도 클래스의 소멸자가 실행되고 난 다음에 기초클래스의 소멸자가 실행된다
        - 스택에 생성된 객체의 소멸순서는 생성순서와 반대이다.
        ```c++
        class SuperClass {
        private:
            int num;
        public:
            SuperClass(int n) : num(n) { std::cout << num << "SuperClass constructor" << std::endl; }
            ~SuperClass() { std::cout << num << "SuperClass Destructor" << std::endl; }

        };

        class SubClass : public SuperClass {
        private:
            int subNum;
        public:
            SubClass(int n, int sn) : SuperClass(n), subNum(sn) { std::cout << subNum << "SubClass Constructor" << std::endl; }
            ~SubClass() { std::cout << subNum << "SubClass Destructor" << std::endl; }
        public:
        };
        int main(void) {
            SuperClass super(100);
            SubClass sub(200, 400);
            return 0;
        }
        ```
        <img src='./images/상속소멸과정.png'>

    

- 08-1 객체 포인터 + 동적할당
    - 객체의 주소 값을 저장하는 포인터 변수
    - AAA형 포인터 변수는 AAA형 객체 또는 AAA를 직접 혹은 간접적으로 상속하는 모든 객체를 가리킬 수 있다.
    ```c++
    /*
	객체 동적 생성
    */

    #include <iostream>

    class AClass {
    public:
        void showAClass() {
            std::cout << " Dynamically created object " << std::endl;
        }
    };

    int main(void) {

        AClass* ptr = new AClass();			//객체 동적 할당. 힙영역
        ptr->showAClass();
        delete ptr;

        return 0;
    }
    ```

    - 객체 포인터 초기화 nullptr
    ``` c++
    #include <iostream>

    class MyClass {

    public:
        void show() {
            std::cout << "hello" << std::endl;
        }
    };
    int main(void) {

        MyClass* ptr = nullptr;
        //printf("ptr: %d\n", ptr);    //%d은 int형식의 인수필요하지만 ptr은 MyClass * 이다.
        
        
        if (ptr != nullptr) {
            ptr->show();
        }
        else {
            printf("ptr is null\n");
        }

        ptr = new MyClass();
        ptr->show();
        return 0;
    }
    ```
    - 함수 오버라이딩
        - `함수가 오버라이딩 되면, 오버라이딩 된 기초 클래스의 함수는, 오버라이딩을 한 유도클래스의 함수에 가려진다.`
    - 업캐스팅
        - c++컴파일러는 포인터 연산의 가능성 여부를 판단할 때, 포인터의 자료형을 기준으로 판단한다.
        - 부모는 자식을 가리킬 수 있다.
        - 상속 관계에서 파생 클래스(Derived Class)의 객체를 부모 클래스(Base Class)의 포인터나 참조로 할당하는 것을 말합니다.
        - `부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 된다.`
        - `자식 클래스에서 추가된 멤버 함수나 변수에 접근할 수 없게 되고, 부모 클래스에서 정의된 함수나 멤버에만 접근할 수 있게 됩니다.`
        - 포인터형에 해당하는 클래스에 정의된 멤버에만 접근이 가능하다.
        ```c++
        #include <iostream>

        class Base {
        public:
            void show() { printf("Base Class!\n"); }
        };


        class Derived : public Base {
        public:
            void show() { printf("Derived Class!\n"); }	//함수오버라이딩
        };


        int main(void) {
            Base* bptr = nullptr;
            Derived* dptr = nullptr;

            Derived  obj;	//파생클래스 객체
            dptr = &obj;
            dptr->show();	//Derived Class!
                            
            /*부모와 자식클래스의 타입이 다른데 어떻게 다른 타입의 포인터로 가리킬 수 있을까?*/
            bptr = &obj;	// 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업개스팅 된다.
            bptr->show();   //Base Class!
            return 0;
        }
        ```
    - 다운캐스팅[c++](./day35/objpointer6.cpp)
        - 다운캐스팅은 컴파일러가 자동으로 해주지 않기 때문에 명시적인 형 변환(casting)이 필요합니다. 
        - 부모 클래스 타입의 포인터나 참조를 자식 클래스 타입으로 변환
        ```c++
        Base bobj;
    	Derived* dptr = (Derived*) & bobj;
        ```
- 08-2 가상함수
    - 추상클래스
        - 추상 클래스는 객체를 직접 생성할 수 없는 클래스입니다.
        - 추상클래스를 상속받은 후손이 클래스 생성할 수 있다.
        - 추상 클래스는 추상 메서드를 가질 수 있는데, 이 메서드는 자식 클래스에서 반드시 구현해야 합니다.
    - 가상함수
        - 파생클래스에서 재정의할 것을 약속받은 멤버함수
        - Base클래스의 멤버함수에 virtual 키워드를 사용하여 만든다.
        - virtual table이 만들어지고, dynamic binding으로 동작한다.
        ```c++
        class Base {

        public:
            virtual void func1() { std::cout << "B::func1()" << std::endl; }	//가상함수
            virtual void func2() { std::cout << "B::func2()" << std::endl; }	//가상함수
            void func3() { std::cout << "B::func3()" << std::endl; }   // 일반 메서드
        };

        class Derived : public Base {

        public:
            virtual void func1() override { std::cout << "D::func1()" << std::endl;}	//가상함수를 재정의하는 멤버함수를 나타남
           
           /*
           func3() 일반 함수는 가상 함수처럼 동적 바인딩이 되지 않기 때문에, 부모 클래스에서 호출된 일반 함수가 자식 클래스에서 호출될 수 없습니다.
           */
            void func3() { std::cout << "D::func3()" << std::endl; }  // 일반 메서드			
            void func4() { std::cout << "D::func4()" << std::endl; }  // 일반 메서드
        };

        int main(void) {
            Base b;
            Derived d;
            Base* bptr = new Derived();		//객체포인터 동적할당 및 upcasting

            bptr->func1();  //D::func1()			// base클래스의 func1()은 가상함수로 선언되어 derived 클래스의 func1()이 호출된다
            bptr->func2();	//B::func2()			//base클래스의 func2()은 가상함수로 선언되었지만 오버라이딩이 되지 않았다. 
            bptr->func3();	//B::func3()			//포인터타입의 호출함수가 결정된다.
            

            /*func4()는 Base 클래스에 존재하지 않으며, Derived 클래스에서만 정의된 함수입니다.
             따라서 Base 클래스 포인터인 bptr을 통해서는 func4()를 호출할 수 없습니다. 
             이 코드 줄은 주석 처리되어 있으며, 만약 호출하려고 한다면 컴파일 오류가 발생할 것입니다.
            */
            //bptr->func4();   //Base클래스에 func4()라는 멤버함수가 없다.

            /* delete는 Derived 클래스의 소멸자를 호출하며,
             Base 클래스의 소멸자도 호출합니다.*/
            delete bptr;  //기존 동적메모리 힙 영역 삭제
            bptr = &b;
            bptr->func1();  //B::func1()
            bptr->func2();	//B::func2()
            bptr->func3();	//B::func3()
            return 0;
        }
        ```
        <img src='./images/base클래스가상함수.png'>
        <img src='./images/derived클래스가상함수.png'>

        - 객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생클래스의 객체를 가리키면 접근은 기초클래스 멤버로 제한된다. (upcasting)
        - 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초클래스의 멤버함수를 가상함수로 만들면 된다.
        - 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정한다.
        <img src='./images/가상함수.png'>
    - 순수 가상함수
        - 함수 몸체가 정의되지 않은 함수
        - 0의 대입을 표시한다. 이것은 0의 대입을 의미하는 게 아니고, 명시적으로 몸체를 정의하지 않았음을 컴파일러에게 알리는 것이다.
        - 해당 함수가 반드시 자식 클래스에서 구현되어야 함을 명시하는 함수입니다. 
        <img src='./images/순수가상함수.png'>

        ```c++
        
        #include <iostream>

        class Cinterface {
        public:
            Cinterface() { std::cout << "Cinterface constructor" << std::endl; }
            virtual void getData() const = 0;		// 순수 가상 함수

        };

        class Cinsub : public Cinterface {
        public:

            Cinsub() { std::cout << "Cinsub constructor" << std::endl; }
            void getData() const  override { std::cout << "Pure Virtual Function()" << std::endl; }   //순수 가상 함수의 재정의
        };
        int main(void) {
            //Cinterface c;  //Cinterface는 순수 가상 함수가 있기 때문에 추상 클래스입니다. 따라서 Cinterface 클래스 자체는 객체를 생성할 수 없습니다.

            /* 자식클래스 생성자 호출할 경우, 부모클래스 생성자가 생략된 경우, 부모클래스 기본생성자가 호출된다.*/
            Cinsub c;		//Cinterface constructor
                            //Cinsub constructor

            c.getData();	//Pure Virtual Function()
            return 0;
        }
        ```
- 08-3 가상 소멸자와 참조자의 참조가능성 [c++](./day35/virtual3.cpp)
    - C++에서 객체를 동적으로 할당하고 delete 연산자를 사용하여 메모리를 해제할 때, 부모 클래스 포인터로 자식 클래스 객체를 가리키는 경우, 부모 클래스에 정의된 소멸자만 호출될 수 있습니다. 이 때, 자식 클래스의 소멸자가 호출되지 않으면 자식 클래스에서 할당한 메모리가 해제되지 않아 메모리 누수가 발생할 수 있습니다.
    - 가상 소멸자를 사용하여 부모 클래스의 포인터로 자식 클래스 객체를 삭제할 때, 부모 클래스의 소멸자가 호출되면서 자식 클래스의 소멸자도 자동으로 호출되도록 해야 합니다.
    - 가상함수와 마찬가지로 소멸자도 상속의 계층 구조상 맨 위에 존재하는 기초 클래스의 소멸자만 virtual로 선언하면, 이를 상속하는 유도 클래스의 소멸자들도 모두 가상 소멸자로 선언이 된다. 
    - 가상소멸자가 호출되면 , 상속의 계층구조상 맨 아래에 존재하는 유도클래스의 소멸자가 대신 호출되면서, 기초 클래스의 소멸자가 순차적으로 호출된다.

    ```c++
    #include <iostream>

    class CTest {						//클래스명 대문자
    private:							//멤버변수 private, 멤버함수 public
        int num;
    public:
        //입력이 1개인 생성자 오버로딩 및 이니셜라이져
        CTest(int anum) : num(anum) { std::cout << num <<"CTest constructor" << std::endl; }

        //가상함수 
        virtual void vfunc() {
            std::cout << "CTest virtual Function()" << std::endl;
        }

        //일반함수
        void func() {
            std::cout << "CTest function()" << std::endl;
        }

        virtual ~CTest(){					//가상소멸자
            std::cout << num << "CTest destructor" << std::endl;
        }

        
    };

    // 상속
    class CTestSub : public CTest{
    private:
        int num2;
    public:
        //입력이 2개인 생성자 오버로딩 및 부모객체생성자 이니셜라이져 
        CTestSub(int anum1, int anum2) : CTest(anum1), num2(anum2) { std::cout << num2 << "CTestSub constructor" << std::endl; }

        //가상함수 오버라이딩
        void vfunc() override {
            std::cout << "CTestSub Virtual Function Overriding " << std::endl;
        }

        
        ~CTestSub() {
            std::cout << num2 << "CTestSub destructor" << std::endl;
        }
    };

    int main(void) {
        CTest* ptr = new CTestSub(3, 33);		//객체포인터 동적할당 및 업캐스팅
        ptr->func();   //Ctest의 func()
        ptr->vfunc();  // CTestSub의 vfunc()
        delete ptr;		//33 CTestSub destructor이 이뤄지지 않음!!!!(문제해결필요) => CTest의 소멸자 앞에 virtual 적는다.
        return 0;
    }
    ```
    <img src='./images/가상소멸자.png'>

- 16-1 형변환 연산자
    - static_cast<type-id> (expression)
    ```c++
    #include <iostream>

    int main(void) {
        char ch;
        int i = 100;
        float f = 3.14;
        double d = 2.345;

        ch = static_cast<char>(i);
        std::cout << ch << std::endl;    //아스키 코드 100 <=> d
        ch = (char)i;					//명시적 형변환
        std::cout << ch << std::endl;

        d = static_cast<double>(f);     //float에서 double로의 변환은 정밀도의 확장이므로 숫자 값은 변하지 않으며 그대로 3.14로 출력됩니다.
        std::cout << d<< std::endl;

        //큰자료형을 작은자료형으로 변환시 데이터가 잘라짐.주의필요
        i = static_cast<int>(d);
        std::cout << i << std::endl;

        std::cout<< typeid(ch).name() << std::endl;   //char
        std::cout << typeid(d).name() << std::endl;		//double
        return 0;
    }
    ```
    - 업캐스팅, 다운캐스팅의 경우 포인터변수의 형의 클래스 멤버에만 접근가능
    ```c++
    #include <iostream>


    class Base {
    public:
        void func1() { std::cout << "Base::func1()" << std::endl; }
        
    };

    class Derived : public Base {
    public:
        void func() { std::cout << "Derived::func()" << std::endl; }
        void func1() { std::cout << "Derived::func1()" << std::endl; }

    };

    class Derived2 : public Derived {
    public:
        void func() { std::cout << "Derived2::func()" << std::endl; }
        void func1() { std::cout << "Derived2::func1()" << std::endl; }
    };
    int main(void) {
        Base* bptr;
        Derived obj;
        bptr = static_cast<Base*>(&obj);	//업캐스팅 
        bptr->func1();		//부모클래스의 멤버에만 접근가능
        
        Base obj2;
        Derived* dptr;
        dptr = static_cast<Derived*>(&obj2);	//다운캐스팅
        dptr->func();	//자식클래스Derived의 멤버에만 접근가능
        dptr->func1();

        Derived2* d2ptr = static_cast<Derived2*>(dptr);	//다운캐스팅
        d2ptr->func();	//자식클래스Derived2의 멤버에만 접근가능
        d2ptr->func1();
        return 0;
    }
    ```
## 36일차(3/25)
- 동적할당 괄호와 중괄호
    - 두 가지 방법 모두 동작합니다. int* ip = new int(10);와 int* ip = new int{10}; 모두 10으로 값을 초기화합니다.
    - 하지만 중괄호 {} 초기화는 C++11 이후 더 안전하고 명확한 초기화 방식으로 권장됩니다. 특히 값이 초기화되지 않거나 의도치 않게 0으로 초기화되는 문제를 방지할 수 있습니다.
- 가상소멸자는 가상함수의 일종
    - C++에서 가상 함수는 virtual 키워드를 사용하여 선언된 함수로, 이를 통해 다형성을 지원합니다. 가상 소멸자도 이와 동일하게 동작하며, 상속 관계에서 동적 바인딩을 사용하여 객체가 삭제될 때 적절한 소멸자가 호출될 수 있도록 합니다.
- 가상함수 
    - 업캐스팅, 다운캐스팅의 경우 포인터변수의 형의 클래스 멤버에만 접근가능을 해결하기 위해서는 가상함수 필요하다.
    ```c++
    Super* stpr2 = new Sub();	
    Sub* subptr = dynamic_cast<Sub*>(stpr2);
    if (subptr != nullptr) {
        //sub클래스의 멤버에만 접근할 수 있다.
        subptr->func();         
        subptr->func1();    //Super 클래스의 func1()을 상속받고, 별도로 오버라이딩하지 않아도 Super 클래스의 func1()을 사용할 수 있습니다.
        subptr->func2();
        subptr->fx();
    }
    ```
    ```c++
     //Super클래스의 멤버에만 접근할 수 있다.
    Super* sptr = new Super();
    sptr->func();
    sptr->func1();
    sptr->fx();
    ```
- 이동생성자
    - 이동 생성자는 r-value 참조(&&)를 파라미터로 받는다.
    - 사용자가 이동 생성자를 정의하지 않으면 컴파일러가 기본 이동 생성자를 자동으로 생성
    ```c++
    private:
	    int a;
    public :
        Human(int a) {         //생성자
            this->a =a;
        }
        Human(const Human& other){   //복사생성자
            this->a = other.a; 
        }

        Human(const Human&& other) noexcept{  //이동생성자
            this->a = other.a;
        }

    int main(void){
        Human h1(10);
        Human hcopy(h1);
        Human hmove(std::move(h1));
        return 0;
    }
    ```



- 16-1.형변환 연산자
    - 형변환 연산 컴파일에러의 경우
        - 다운캐스팅의 경우, 주의가 필요하다.
        <img src='./images/형변환안전한경우와아닌경우.png'>
    - dynamic_cast
        - 업캐스팅 [c++](./day36/dynamic_cast.cpp)
            - 다운캐스팅에서 주로 사용되지만, 업캐스팅에서도 안전성을 보장하는 방식으로 사용할 수 있습니다.
        - 다운캐스팅
            - 가상 함수(virtual functions)가 포함된 클래스 계층에서만 제대로 동작
            - 다운캐스팅 지원(부모 클래스를 자식 클래스로 형변환할 때 사용됩니다.)
            - 잘못된 형변환이 일어날 경우 nullptr을 반환하여, 오류를 방지할 수 있습니다.
            - dynamic_cast는 런타임에 타입을 검사하여 형변환이 가능한지 확인합니다. 이를 통해, 잘못된 형변환을 피할 수 있습니다.
            - **dynamic_cast는 정확한 객체 타입을 알고 있을 때만 작동합니다. 즉, 부모 클래스 포인터가 실제로 자식 클래스 객체를 가리키고 있어야만 다운캐스팅이 성공합니다. 그렇지 않으면 dynamic_cast는 nullptr을 반환하게 됩니다.**
        ```c++
        #include <iostream>

        class Base {
        public:
            virtual ~Base() {}  // 가상 소멸자를 추가해야 dynamic_cast가 동작함
        };

        class Derived : public Base {
        public:
            void foo() {
                std::cout << "Derived class" << std::endl;
            }
        };

        int main() {
            Base* b = new Derived(); // Base 클래스 타입으로 Derived 객체 생성

            // dynamic_cast를 사용하여 다운캐스팅 시도
            Derived* d = dynamic_cast<Derived*>(b);

            if (d) {
                d->foo();  // 성공적으로 다운캐스팅 된 경우  
            }
            else {
                std::cout << "Cast failed!" << std::endl;  // 다운캐스팅 실패
            }

            delete b;
            return 0;
        }
        ```
        - 다운캐스팅 실패의 이유
            - 객체의 실제 타입이 부모 클래스 타입이고, 그 부모 클래스 객체를 자식 클래스 타입으로 변환하려고 했기 때문입니다.
            ```c++
            Super* stpr = new Super();  // 부모 객체
            Sub* subptr = dynamic_cast<Sub*>(stpr);  // 실패, subptr은 nullptr
            ```
    - static_cast
        - 정적 형 변환: 컴파일 시간에 타입을 변환합니다.
        - 강력한 타입 체크: 타입 변환이 컴파일 타임에 검증되므로, 잘못된 타입 변환은 컴파일 에러를 발생시킵니다.
        - 상속 관계에서의 변환: 상속 관계가 있는 클래스 간에서 업캐스팅과 다운캐스팅을 할 때 사용됩니다. 업캐스팅은 안전하지만, 다운캐스팅은 조심해야 합니다. 실제 객체 타입과 캐스팅된 타입이 일치하지 않으면 정의되지 않은 동작을 초래할 수 있습니다.
        - 문자열 리터럴과 포인터 변환: static_cast는 정확한 타입 변환을 요구하므로, 서로 다른 타입 간 변환 시 안전하지 않거나, 컴파일 에러가 발생할 수 있습니다.
        1. 업캐스팅 + 가상함수
        ```C++
        #include <iostream>

        class Base {
        public:
            virtual void show() { std::cout << "Base class\n"; }
        };

        class Derived : public Base {
        public:
            void show() override { std::cout << "Derived class\n"; }
        };

        int main() {
            Derived d;
            Base* basePtr = static_cast<Base*>(&d);  // Derived -> Base (업캐스팅)
            basePtr->show();  // 출력: Derived class
            return 0;
        }

        ```
        2. 다운캐스팅
        ```C++
        #include <iostream>

        class Base {
        public:
            virtual void show() { std::cout << "Base class\n"; }
        };

        class Derived : public Base {
        public:
            void show() override { std::cout << "Derived class\n"; }
            void derivedMethod() { std::cout << "Method in Derived class\n"; }
        };

        int main() {
            Base* basePtr = new Derived();
            Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Base -> Derived (다운캐스팅)
            derivedPtr->show();  // 출력: Derived class
            derivedPtr->derivedMethod();  // 출력: Method in Derived class
            delete basePtr;
            return 0;
        }

        ```
        3. 배열과 포인터 간의 변환
        ```c++
        #include <iostream>

        int main() {
            int arr[] = {1, 2, 3, 4};
            int* p = static_cast<int*>(arr);  // 배열 포인터로 변환
            std::cout << "First element: " << *p << std::endl;  // 출력: First element: 1
            return 0;
        }
        ```
    - const_cast
        - 상수 객체나 상수 포인터를 비상수로 변경하는 데 사용
        - const로 선언된 변수나 포인터의 상수성 속성을 제거하거나, 반대로 비상수 포인터를 상수 포인터로 변환하는 데 사용될 수 있습니다.
        1. C++ 컴파일러는 const로 선언된 변수는 변경되지 않는다고 가정하고, 해당 변수를 메모리 상에서 최적화할 수 있습니다.
            이 경우, const_cast로 상수성만 제거한 후 값을 변경하려고 하면, 실제 메모리에서 값이 변경되지 않거나, 잘못된 동작을 일으킬 수 있습니다.    
            [c++](./day36/const_cast2.cpp) [c++](./day36/const_cast2_2.cpp)
            ```c++
            #include <iostream>
            int main(void) {
                const int num2 = 10;
                //std::cout << ++num2 << std::endl;   //const는 상수이다. lvalue여야하는데 아니기에 에러난다.

            /*
            * const_cast 예외: 잘못된 사용
            상수 객체 num2의 값을 변경하려고 하므로 정의되지 않은 동작을 유발합니다.
            num2이 상수로 선언되어 있기 때문에 컴파일러가 이를 최적화할 수도 있으며, 프로그램이 예상대로 동작하지 않을 수 있습니다.
            */ 
            
                int* np = const_cast<int*>(&num2);
                *np += 1;     //num2를 바꾸는 것은 상수기에 불가능하다.
                std::cout << num2 << std::endl;   //10
                return 0;
            }
            ```
        2. const 멤버함수 내에서는 멤버 변수의 값을 변경할 수 없다.
            ```c++
            #include <iostream>

            class MyClass {
            private:
                int num;
            public:
                void setNum(int n) { num = n; }
              
                void print() const { 
                    std::cout << "Before: " <<num << std::endl;  
                    //num++     //const 함수는 함수내에서 값변경할 수 없다.
                    const_cast<MyClass*>(this)->num--;
                    std::cout << "After: " << num << std::endl;
                }
            };

            int main() {

                MyClass obj;
                obj.setNum(10);
                obj.print();

                return 0;
            }
            ```
            <img src='./images/const_cast비상수화.png'>
            - 코드에서 const_cast를 사용하여 this 포인터를 const에서 비상수 포인터로 변환하고, num을 수정하는 방식으로 이를 우회하고 있습니다.
            - const_cast는 상수성 제거를 목적으로 사용되지만, 상수 객체의 값을 변경하는 것은 일반적으로 권장되지 않으며, 안정적이지 않습니다.
            - const_cast를 사용하여 const 함수 내에서 상수 객체의 상태를 수정하는 방법을 보여주고 있지만, 이러한 접근은 안전하지 않으므로 권장되지 않습니다. 
            - const 함수는 가능한 한 상수 객체를 변경하지 않도록 작성하는 것이 좋습니다.
    
    - reinterpret_cast
        - 포인터->포인터, 포인터->변수, 변수->포인터로 하는 주로 포인터 관련 연산자
        - 메모리 주소를 다른 타입으로 변환하는 데 사용되며, 포인터를 비트 단위로 재해석하는 방식입니다.
        - 이 방식은 메모리 주소를 다루는 작업에서 주로 사용되며, 타입의 크기나 해석 방법에 따라 예기치 않은 동작을 초래할 수 있습니다.
        - reinterpret_cast는 포인터 변환을 위한 매우 저수준의 연산자이므로 신중하게 사용해야 합니다.
        ```c++
        #include <iostream>

        int main(void) {
            int* ip = new int{ 10 };
            long lg = reinterpret_cast<long>(ip);   //int* -> long
            unsigned int ui = reinterpret_cast<int>(ip);//int* -> uint

            printf("ip: %u, lg:%u , ui:%u \n", ip, lg, ui);  //ip: 1230272752, lg:1230272752 , ui:1230272752


            //해결필요	- X86로 하기
            int* p = reinterpret_cast<int*>(lg);
            int* p1 = reinterpret_cast<int*>(ui);
            printf("p: %d, p1:%d\n", *p,*p1);

            int* p2 = new int{ 100 };
            char* pc = reinterpret_cast<char*>(p2);   //int*->char* 
            printf("pc: %d\n", *pc);

            p2 = reinterpret_cast<int*>(pc);		//char*->int* 
            printf("p: %d\n", *p2);


            return 0;
        }

        ```
       <img src='./images/reinterpret_cast실행결과.png'>
    - 문자열변환
        1. 문자열 리터럴을 char*로 변환하려고 할 때 (const char*)
            - 문자열 리터럴은 const char* 타입으로 취급되므로, 이를 **char***로 변환하는 것과 같은 const를 제거하는 변환은 위험하며 컴파일 에러를 발생시킵니다.
        ```c++
        #include <iostream>

        int main() {
            const char* str = "Hello";  // 문자열 리터럴은 const char* 타입입니다.
            
            // 올바른 변환: const char*에서 const char*로 변환
            const char* ptr = static_cast<const char*>(str);
            std::cout << ptr << std::endl;  // 출력: Hello
            
            return 0;
        }
        ```
        2. 문자열 리터럴을 std::string으로 변환하려고 할 때
         - std::string으로의 변환은 static_cast로는 수행할 수 없고, std::string의 생성자를 사용해야 합니다.
        ```c++
       #include <iostream>
        #include <string>

        int main() {
            const char* str = "Hello";

            // std::string은 const char*에서 직접 초기화 가능
            std::string strObj = str;  // 생성자를 사용하여 변환

            std::cout << strObj << std::endl;  // 출력: Hello

            return 0;
        }


        ```
- 이름없는 임시객체 [c++](./day36/tempobj.cpp)
    - 이름없는 임시객체를 변수에 저장하지 않으면 다음명령실행 시 바로 사라진다.
    - 소멸자는 마지막행까지 실행된 후에 실행된다.
    - 이름없는 임시객체는 포인터변수 , 참조할 수 없다. (lvalue가 아니므로)  [c++](./day36/tempobj2.cpp)

    1. rvalue참조는 const가 아니기에 데이터변경할 수 있다. [c++](./day36/tempobj2.cpp)
    ```c++
    MyClass&& obj2 = MyClass{ 46 };		//이름없는객체를 rvlaue참조
	obj2.setData(22);

    const MyClass& obj3 = MyClass{ 100 };  //이름없는객체를 상수const참조
    //obj3.setData()불가, obj3은 상수참조이기에 값변경할 수 없다.
    ```
    2. 이름없는 임시객체의 생성과 소멸  [c++](./day36/tempobj1.cpp)
    <img src ='./images/이름없는임시객체의생성과소멸.png'>
    3. 매개변수가 참조일 때, 객체일 때 + 이름없는객체 [c++](./day36/tempobj3.cpp)[c++](./day36/tempobj3_2.cpp)
    <img src ='./images/매개변수객체일때.png'>
    <img src ='./images/매개변수참조일때.png'>
    
- 상수와 리터럴 상수
    - 리터럴 상수
    ```c++
    //리터럴 상수- 값변경불가

    // const 참조
    const int& ref = 10;
    std::cout << ref << std::endl;
    // 참조해도 값변경 불가
    //ref = 20;

    // 주소를 참조하려는 시도는 불가능합니다.
    int* ptr = &10; 
    return 0;
    ```
    - 상수
    ```c++
    //const 상수- 값변경불가

	const int a = 10;

	const int& ref = a;
	//값변경불가
	//ref = 20;


	const int* p = &a;
	//값변경불가
	//*p = 20;
    ```
    <img src='./images/상수와리터럴상수.png'>

- 스마트 포인터 unique_ptr
    - 주로 동적 메모리 할당을 관리하고 메모리 누수를 방지하는 데 사용됩니다
    1. 소유권
        - unique_ptr는 동적 메모리의 소유권을 유일하게 가집니다. 하나의 unique_ptr만이 특정 객체를 소유할 수 있습니다. 
        - 다른 unique_ptr가 그 객체를 소유하게 되면, 소유권이 이동해야 합니다.
        - 이 소유권이 이동되면 원래의 unique_ptr는 더 이상 객체를 소유하지 않으며, 자동으로 nullptr이 됩니다. 이때 객체가 중복으로 삭제되지 않도록 관리됩니다.
    2. 소멸 시 자동 해제
        - unique_ptr는 객체가 더 이상 필요 없을 때 자동으로 객체를 삭제합니다. 
        - 즉, unique_ptr가 범위를 벗어나거나 소멸될 때, 해당 객체의 소멸자가 자동으로 호출됩니다. 

    - move와 unique_ptr
        - move(ptr)를 사용하면 ptr의 소유권이 이동되고, ptr은 더 이상 해당 객체를 소유하지 않게 됩니다.
        - 이때 객체는 새로 생성되지 않으며, 원래의 객체가 그대로 이동합니다.
        ```c++
        #include <iostream>
        using namespace std;

        class MyClass {

        public:
            MyClass() { std::cout << "생성자" << std::endl; }
            ~MyClass() { std::cout << "소멸자" << std::endl; }
        };

        int main(void) {

            unique_ptr<MyClass> ptr(new MyClass{});
            unique_ptr<MyClass> ptr2 = move(ptr);   //ptr의 소유권을 ptr2로 이동시킵니다. 즉, ptr은 이제 nullptr이 되고, ptr2가 이 객체를 소유하게 됩니다.
            
            return 0;
        }
        ```
- 스마트 포인터 shared_ptr
    - 여러 개의 포인터가 같은 객체를 공유할 수 있게 해주는 스마트 포인터입니다.

    1. 참조 카운팅 (Reference Counting)
        - 여러 shared_ptr 객체가 하나의 객체를 가리킬 수 있습니다. 각 shared_ptr는 객체를 참조할 때마다 참조 카운트를 증가시키고, shared_ptr가 범위를 벗어나거나 소멸될 때 참조 카운트를 감소시킵니다.
        - 참조 카운트가 0이 되면, 즉 더 이상 해당 객체를 참조하는 shared_ptr가 없을 때, 객체는 자동으로 삭제됩니다.
    2. 자동 메모리 관리
        - shared_ptr는 동적으로 할당된 객체에 대한 메모리 관리 책임을 자동으로 집니다. 객체가 더 이상 필요 없을 때 자동으로 소멸시켜 메모리 누수를 방지합니다.
    3. 복사 가능 (Copyable)
        - shared_ptr는 객체의 소유권을 복사할 수 있습니다. 객체의 소유권을 복사하면 참조 카운트가 증가하고, 소멸 시 참조 카운트가 감소합니다. 
    ```c++
    //make_shared : 객체와 참조 카운트를 하나의 메모리 블럭에 같이 할당시킨다. /shared_ptr을 생성하는 함수
    #include <iostream>

    class MyClass {

    public:
        MyClass() { std::cout << "생성자" << std::endl; }
        ~MyClass() { std::cout << "소멸자" << std::endl; }
        void func(){ std::cout << "shared_ptr" << std::endl; }
    };

    int main(void) {
        std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
        std::shared_ptr<MyClass> ptr2 = ptr;
        std::cout << "ptr과  ptr2는 동일한 객체를 가리킨다. 공유한다." << std::endl;

        return 0;
    }

    ```
- 스마트 포인터 weak_ptr
    - 주로 순환 참조(circular reference) 문제를 해결하기 위해 사용됩니다.
    - 객체가 더 이상 필요하지 않으면, 자동으로 삭제되지 않도록 합니다.
    1. 소유하지 않음
        - weak_ptr는 객체에 대한 소유권을 갖지 않습니다. 대신, 객체가 여전히 유효한지를 추적할 수 있는 기능만 제공합니다. 
        - 즉, weak_ptr는 객체의 참조 카운트를 증가시키지 않기 때문에, 해당 객체가 소멸할 때 weak_ptr는 아무런 영향을 미치지 않습니다.
    2. 순환 참조 해결
        - shared_ptr끼리 순환 참조가 발생하면, 참조 카운트가 0이 되지 않아서 메모리 누수 문제가 발생할 수 있습니다. weak_ptr는 이 문제를 해결할 수 있습니다. 
    3. 유효성 검사
        - weak_ptr는 객체가 여전히 유효한지를 lock() 메서드를 통해 확인할 수 있습니다.
        - lock()은 shared_ptr를 반환하며, 이때 객체가 이미 소멸되었으면 nullptr을 반환합니다. 

    ```c++
    #include <iostream>
    #include <memory>

    class MyClass {
    public:
        MyClass() { std::cout << "생성자 호출" << std::endl; }
        ~MyClass() { std::cout << "소멸자 호출" << std::endl; }
    };

    int main() {
        // shared_ptr 생성
        std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();

        // weak_ptr 생성: ptr1을 참조하되 소유하지 않음
        std::weak_ptr<MyClass> weakPtr = ptr1;

        // weak_ptr에서 shared_ptr을 얻기 위해 lock() 사용
        std::shared_ptr<MyClass> ptr2 = weakPtr.lock();

        if (ptr2) {
            std::cout << "ptr2는 유효한 객체를 참조합니다." << std::endl;
        }

        // ptr1을 범위를 벗어나게 하면 객체가 소멸되고, weakPtr은 더 이상 유효하지 않음
        ptr1.reset(); // 참조 카운트가 0이 되어 객체가 소멸됨

        // 다시 weakPtr에서 lock()을 사용하면 nullptr이 반환됨
        ptr2 = weakPtr.lock();

        if (!ptr2) {
            std::cout << "ptr2는 더 이상 유효한 객체를 참조하지 않습니다." << std::endl;
        }

        return 0;
    }

    ```
    <img src='./images/weak_ptr실행결과.png'>

    - 순환참조 shared_ptr [c++](./day36/weak_ptr2.cpp)
        ```c++
        #include <iostream>

        class MyClass {

        public:
            MyClass() { std::cout << "생성자" << std::endl; }
            ~MyClass() { std::cout << "소멸자" << std::endl; }
            void func(){ std::cout << "weak_ptr" << std::endl; }
        };

        int main(void) {
            std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();			//c++14이후부터 지원
            std::weak_ptr<MyClass> weakptr = ptr;


            std::shared_ptr<MyClass> ptr2 = weakptr.lock();     //weak_ptr에서 shared_ptr로 변환
            if (ptr2) { std::cout << "weak_ptr로 변환한 shared_ptr 사용가능 " << std::endl; }

            return 0;
        }
        ```
    - 순환참조 해결하는 weak_ptr  [c++](./day36/weak_ptr2_2.cpp)
        ```c++
        #include <iostream>
        #include <memory>

        struct B;

        struct A {
            std::shared_ptr<B> b_ptr;  // B 객체를 참조하는 shared_ptr
        };

        struct B {
            std::weak_ptr<A> a_ptr;  // A 객체를 참조하는 weak_ptr
        };

        int main(void) {
            // A와 B 객체를 생성하고 shared_ptr로 관리
            std::shared_ptr<A> a(new A());
            std::shared_ptr<B> b(new B());

            // A 객체의 b_ptr에 B 객체를 참조하도록 설정
            a->b_ptr = b;

            // B 객체의 a_ptr에 A 객체를 weak_ptr로 참조하도록 설정
            b->a_ptr = a;

            return 0;
        }
        ```
- STL(Standard Template Library)
    - 데이터 구조와 알고리즘을 효율적으로 제공하는 라이브러리
    - 다양한 자료형에 대해 동작하는 템플릿 기반의 클래스와 함수들로 구성되어 있습니다.
    1. 컨테이너 
        - 데이터를 저장하고 관리하는 자료구조
        1. 시퀀스 컨테이너 
            - 데이터가 순차적으로 저장되며, 요소들이 저장된 순서대로 접근 가능
            - 인덱스를 사용하거나 반복자를 통해 순차적으로 접근할 수 있습니다.
        2. 연관 컨테이너 
            - 데이터를 키-값 쌍으로 저장
            - 자동으로 정렬되거나 특정 규칙에 따라 데이터를 저장하고 검색할 수 있습니다.
        3. 컨테이너 어댑터 
    2. 반복자
- 시퀀스컨테이너 - 벡터
    - std::vector와 std::list는 size() 함수를 제공하여 크기를 구할 수 있습니다.
    - 배열은 size() 함수가 없으며, sizeof 연산자를 사용하여 크기를 구해야 합니다.
    1. 벡터 초기화 및 size()크기 함수
    ```c++
    #include <iostream>
    #include <vector>

    int main(){
        std::vector<int> v;
        std::vector<int> v1{ 10 };
        std::vector<int> v2 = { 1,2,3,4,5 };
        std::vector<int> v3(5);   //벡터의 크기를 지정 , 기본값 초기화는 int처럼 기본 타입의 경우 0

        // vector의 크기 .size()
        std::cout << "v size: " << v.size() << std::endl;    //0      
        std::cout << "v1 size: " << v1.size() << std::endl;    //1
        std::cout << "v2 size: " << v2.size() << std::endl;    //5 
        std::cout << "v3 size: " << v3.size() << std::endl;    //5
        return 0;
    }   
    ```

    2. 벡터 출력 [c++](./day36/vector3.cpp) [c++](./day36/iterator.cpp)
        ```c++
        for (int i = 0; i < 5; i++) {
        printf("v2[%d] : %d\t", i, v2[i]);  //v2[0] : 1       v2[1] : 2       v2[2] : 3       v2[3] : 4       v2[4] : 5
        }
        printf("\n");
        for (int i = 0; i < 5; i++) {
            printf("v3[%d] : %d\t", i, v3[i]);  //v3[0] : 0       v3[1] : 0       v3[2] : 0       v3[3] : 0       v3[4] : 0
        }
        
        std::cout << std::endl;   //범위기반 for문-인덱스를 사용할 수 없다.
        for (auto i : v2) {
            std::cout << i << std::endl; //1
                                        //2
                                        //3
                                        //4
                                        //5
        }

        for (auto i =0 ; i < v2.size() ; i++) {
            std::cout << v.at(i) << std::endl; //1
                                        //2
                                        //3
                                        //4
                                        //5
        }

        /*
        vector<int>::iterator는 vector<int> 타입 벡터의 요소를 가리킬 수 있는 반복자입니다.
    	iter는 이 반복자의 변수 이름입니다.

        v.end()는 벡터의 끝을 가리키는 반복자를 반환합니다. 
    	끝을 가리키는 반복자는 실제 요소를 가리키지 않지만, 벡터의 마지막 요소 바로 뒤를 가리킵니다.
	    반복문에서는 이 end()를 사용하여 종료 조건을 설정합니다

        반복자는 포인터처럼 동작하며, *iter는 iter가 가리키는 실제 값을 가져옵니다.
        */
       vector<int>::iterator iter;  //순방향 반복자 선언
    	for (iter = v2.begin(); iter != v2.end(); iter++) {
    		cout << *iter << endl;
    	}


        //std::vector<int>:: iterator iter;은 순방향 반복자 선언
        //근데 이놈을 생략하고 auto선언해도 된다.
        for (auto it = v.begin(); it < v.end(); it++) {

	        std::cout << *it << std::endl;
        }
        ```


    3. 인덱스 요소 값의 주소 출력 + 요소의 값을 간접참조 연산자로 출력
        - v.begin()은 벡터의 첫 번째 요소를 가리키는 반복자입니다.(첫번째 요소의 주소)
        - v.end()는 벡터의 마지막 요소 뒤를 가리키는 반복자입니다.(마지막요소의 다음 주소)
        - `*v.begin()은 첫 번째 요소의 값을 반환하고, *(v.end() - 1)은 마지막 요소의 값을 반환합니다.`
        ```c++
        std::vector<int> v2 = { 1,2,3,4,5 };
        std::cout << "v2의 첫번째 요소값: " << *v2.begin()<< std::endl;  //v2의 첫번째 요소값: 1
        std::cout << "v2의 마지막 요소값: " << *(v2.end()-1) << std::endl;   //v2의 마지막 요소값: 5
        ```
    4. 벡터의 capacity
        - 벡터가 메모리를 할당할 수 있는 공간의 크기
        - 벡터의 크기가 증가할 때, 벡터는 메모리를 재할당하여 용량을 확장할 수 있습니다. 
        - 벡터가 데이터를 추가할 때 자동으로 확장됩니다. 벡터의 크기가 용량을 초과할 때마다 용량이 증가하게 됩니다.
        - 용량 확장 전략
            - 벡터의 용량(capacity)은 보통 두 배씩 증가하지만, 실제로 사용하는 구현체에 따라 조금 더 적은 값으로 증가할 수도 있습니다.
            - 두 배씩 늘리는 방식 (이는 가장 많이 사용되지만, 구현에 따라 다를 수 있습니다.)
            - 최소한 크기가 1 증가하는 방식 (일부 구현에서는 비슷한 방식으로 용량을 조금씩 늘릴 수 있습니다.)

    5. 요소값 삽입, 삭제, 조회 push_back () , insert() , pop_back() , erase() , front(),back()
    ```c++
    vector<int> v2;
    v2.push_back(10);    //v.push_back(10) : 마지막원소 뒤에 10을 추가한다.
    v2.push_back(11);
    v2.push_back(12);
    v2.push_back(13);
    v2.insert(v2.begin(), 1);       //첫번째요소의 위치에 1을 넣는다.
    v2.insert(find(v2.begin(), v2.end(), 12), 20);   // 12을 찾은 위치 바로 앞에 20을 삽입하기 위함입니다. 

    for (auto i : v2) {
        cout << i << endl;    //1 10 11 20 12 13
    }

    v2.pop_back();
    for (auto i : v2) {
        cout << i << endl;    //1 10 11 20 12 
    }
    ```

    ```c++
    vector<string> v;

    v.push_back("tiger");
    v.push_back("lion");
    v.push_back("elephant");
    v.push_back("horse");

    cout << v.front() << endl;			//tiger
    cout << v.back() << endl;			//horse

    vector<string>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++) {
        if (*iter == "elephant") {
            v.erase(iter);
            break;
        }
    }
    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << endl;    //tiger lionn horse
    }
    ```

    6. 벡터 string
    <img src='./images/vectorstring.png'>
    ```c++
    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        vector<char> vec = {'H', 'e', 'l', 'l', 'o', '\0'};  // 수동으로 '\0' 추가
        cout << &vec[0] << endl;  //   &vec[0]의 주소에서 시작하는 문자열을 출력
    }

    ```
    ```c++
    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        vector<string> v;
    
      	v.push_back("tiger");
    	v.push_back("lion");
    	v.push_back("elephant");
    	v.push_back("horse");
    }
    ```

- 반복자 [c++](./day36/iterator.cpp) [c++](./day36/iterator2.cpp) 
    - std::vector<int>:: iterator iter;은 순방향 반복자 선언  ,begin()은 처음주소, end()은 마지막 원소의 이후주소

    - std::vector<int>:: reverse_iterator rit;은 역방향 반복자 선언 ,rbegin()은 마지막주소, rend()은 처음 원소의 이전주소

    - auto로 간단하게 사용가능

    ```c++
    #include <iostream>
    #include <vector>

    int main() {
        std::vector <int> v = { 100,200,300,400,500 };
        
        std::vector<int>:: iterator iter;
        for (iter = v.begin(); iter != v.end(); iter++) {
            std::cout << *iter << std::endl;
        }
        
        for (auto it = v.begin(); it < v.end(); it++) {

            std::cout << *it << std::endl;
        }

        std::vector<int>::reverse_iterator rit;
        for (rit = v.rbegin(); rit != v.rend(); rit++) {
            std::cout << *rit << std::endl;
        }
       
        for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
		std::cout << *rit << std::endl;
    	}
    }
    ```
   
## 37일차(3/26)
- MySQL Connect c++연동 [c++](./db/DB2.cpp)[c++](./db/DB3.cpp)
    - Windows (x86, 64-bit), ZIP ArchiveDebug Binaries 설치 &설치경로

    - visual studio 빈프로젝트 
        - 프로젝트-속성-vc++디렉터리-포함디렉토리-줄추가- C:\Program Files\MySQL\MySQL Connector C++ 1.1.12\include

        - 프로젝트-속성-vc++디렉터리-라이브러리 디렉터리-줄추가-    C:\Program Files\MySQL\MySQL Connector C++ 1.1.12\lib64\debug\vs14


        - 링커-입력-추가종속성-편집-C:\Program Files\MySQL\MySQL Connector C++ 1.1.12\lib\debug\vs14에 있는 mysqlcppcorn.lib찾아  mysqlcppcorn.lib입력

        - visual studio 프로젝터가 있는 폴더에  C:\Program Files\MySQL\MySQL Connector C++ 1.1.12\lib \libcrypto-3-x64.dll ,libssl-3-x64.dll파일 복사 

        - visual studio 프로젝터가 있는 폴더에 C:\Program Files\MySQL\MySQL Connector C++ 1.1.12\lib\debug\vs14\mysqlcppconn-10-vs14.dll파일 복사
        <img src='./images/프로젝트파일의 파일경로에 3개의 파일.png>
        
        - 프로젝트-속성-vc++디렉터리-라이브러리 디렉터리-줄추가-C:\Program Files (x86)\Windows Kits\10\Lib\<version>\um\x64
        - 프로젝트-속성-vc++디렉터리-라이브러리 디렉터리-줄추가-C:\Program Files (x86)\Microsoft Visual Studio\2019\<버전>\VC\Tools\MSVC\<버전>\lib\x86
        - 프로젝트-속성-vc++디렉터리-라이브러리 디렉터리-줄추가-C:\Program Files (x86)\Windows Kits\10\Lib\<버전>\ucrt\x64
    ```c++
    #include <iostream>
    #include <mysql/jdbc.h>

    using namespace std;
    using namespace sql;
    int main() {

        const string server = "tcp://127.0.0.1:3306";
        const string username = "root";
        const string  password = "12345";
        const string database = "madang";

        try {
            mysql::MySQL_Driver* driver =  mysql::get_mysql_driver_instance();
            unique_ptr<Connection> conn (driver->connect(server, username, password));
            conn->setSchema(database);
            cout << "MySQL Connection success" << endl;
        }
        catch (sql::SQLException& e) {
            cerr << "MySQL Connection failed: " << e.what() << endl;
        }

        return 0;
    }
    ```
    <img src='./images/mysqlconnetor과c++연동.png'>
- root계정에서 만든 testDB를 madang사용자에서 사용하도록 권한 주기
    ```sql
    -- root 계정에서의 쿼리
    GRANT ALL PRIVILEGES ON testDB.* TO 'madang'@'%';
    FLUSH PRIVILEGES;

    -- madang계정에서의 쿼리
    SHOW GRANTS FOR 'madang'@'%';
    USE testDB;
    ```