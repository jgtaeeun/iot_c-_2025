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