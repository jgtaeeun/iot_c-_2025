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