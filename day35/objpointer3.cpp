/*
	
*/

//#include <iostream>
//
//class MyClass {
//public:
//	int value;
//	//MyClass(){}
//	MyClass(int v=0) :value(v){
//
//	}
//	void showMyClass(){
//		std::cout << "value : " << value << std::endl;
//	}
//};
//int main(void) {
//	/*
//	기본 생성자와 입력 1개 받는 생성자에 디폴트 값이 있는 경우에서 기본생성자가 두개 있다고 에러난다.
//	
//	기본 생성자가 없고 입력을 1개 받는 생성자가 있을 때, MyClass obj;는 자동으로 입력 1개인 생성자를 호출하려고 시도합니다. 
//	 하지만 이 경우, 디폴트 값을 사용하지 않으면 컴파일러가 해당 생성자에 대한 인자를 제공하지 않아서 오류가 발생합니다.
//	*/
//	MyClass* ptr = new MyClass(12);
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//	delete ptr;
//
//
//
//	/*
//	ptr이 가리키던 힙 메모리를 해제합니다. 이때 ptr은 이제 힙 메모리를 가리키지 않게 됩니다. 하지만 ptr 자체는 여전히 존재하고, 다른 주소를 가리킬 수 있습니다.
//	ptr = &obj;처럼 ptr에 새로운 스택 메모리 주소를 할당할 수 있습니다. 이때 ptr은 더 이상 해제된 힙 메모리를 가리키지 않고, 스택에 존재하는 obj 객체의 주소를 가리킵니다.
//	*/
//	MyClass obj;
//	ptr = &obj;
//	ptr->showMyClass();
//	printf("value:%d\n", ptr->value);
//	return 0;
//}