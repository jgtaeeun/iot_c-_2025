#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Employee {
private:
	char name[100];
public:
	Employee(const char* name) {
		strcpy(this->name, name);
	}
	 void showYourName() const {
		std::cout << name << std::endl;
	}

	 virtual void showSalaryInfo() const {

	}
	 virtual int GetPay() const {
		 return 0;
	 }
};

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(const char* name, int salary) : Employee(name)  {
		this->salary = salary;
	}
	virtual int GetPay() const  override {
		return salary;
	}
	virtual void showSalaryInfo() const override {
		showYourName();
		std::cout << salary << std::endl;
	}
};

class EmployeeHandler {
private:
	int empNum;
	Employee* empList[50];
public:
	EmployeeHandler() :empNum(0){}
	void AddEmployee(Employee* e) {
		empList[empNum++] = e;
	}
	void showAllSalaryInfo() const{
		for (int i = 0; i < empNum; i++) {
			empList[i]->showSalaryInfo();
		}
	}

	void showTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}
		std::cout << sum << std::endl;
	}

	/*
	delete[] empList;를 소멸자에서 사용할 수 없는 이유는 empList가 정적으로 할당된 포인터 배열이기 때문입니다. 
	따라서 empList 배열 자체는 삭제할 필요가 없고, 배열의 각 원소가 가리키는 동적으로 할당된 객체들을 delete를 사용하여 삭제해야 합니다.
	현재 코드에서 delete empList[i];로 객체를 삭제하는 부분은 올바른 방식입니다.
	*/
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
		
	}

};
int main(void) {
	EmployeeHandler e;

	e.AddEmployee(new PermanentWorker("김", 1000));   //업캐스팅
	e.AddEmployee(new PermanentWorker("이", 1500));   //업캐스팅
	e.AddEmployee(new PermanentWorker("준", 2000));   //업캐스팅
	e.showAllSalaryInfo();
	e.showTotalSalary();
	return 0;

}