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