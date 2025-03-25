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
	delete[] empList;�� �Ҹ��ڿ��� ����� �� ���� ������ empList�� �������� �Ҵ�� ������ �迭�̱� �����Դϴ�. 
	���� empList �迭 ��ü�� ������ �ʿ䰡 ����, �迭�� �� ���Ұ� ����Ű�� �������� �Ҵ�� ��ü���� delete�� ����Ͽ� �����ؾ� �մϴ�.
	���� �ڵ忡�� delete empList[i];�� ��ü�� �����ϴ� �κ��� �ùٸ� ����Դϴ�.
	*/
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
		
	}

};
int main(void) {
	EmployeeHandler e;

	e.AddEmployee(new PermanentWorker("��", 1000));   //��ĳ����
	e.AddEmployee(new PermanentWorker("��", 1500));   //��ĳ����
	e.AddEmployee(new PermanentWorker("��", 2000));   //��ĳ����
	e.showAllSalaryInfo();
	e.showTotalSalary();
	return 0;

}