#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Product {

private:
	int price;
	char* id;
	char* producer;

public:
	Product(int i_price, const char* i_id, const char* i_producer) {
		price = i_price;

		id = new char[strlen(i_id) + 1];
		strcpy(id, i_id);

		producer = new char[strlen(i_producer) + 1];
		strcpy(producer, i_producer);
	};

	virtual void ShowData() {
		std::cout << "price: " << price << std::endl;
		std::cout << "id: " << id << std::endl;
		std::cout << "producer: " << producer << std::endl;

	};

	// 출력 연산자 오버로딩
	friend std::ostream& operator<<(std::ostream& out, const Product& p) {
		out << "price: "  << p.price << " id: "<< p.id << " producer: " << p.producer ;  // 부모 부분 출력
		return out;
	}

	~Product() {
		delete[] id;
		delete[] producer;

	}
};

class Book : public Product {

public:
	Book(int i_price, const char* i_id, const char* i_producer) :Product(i_price, i_id, i_producer) {};
	
};

class HandPhone : public Product {

public:
	HandPhone(int i_price, const char* i_id, const char* i_producer) :Product(i_price, i_id, i_producer) {};
	virtual void ShowData() override {
		std::cout << "class HandPhone" << std::endl;
		Product::ShowData();

	};
};

class Computer : public Product {

public:
	Computer(int i_price, const char* i_id, const char* i_producer) :Product(i_price, i_id, i_producer) {};
	
};

int main(void) {
	Product p(1000, "물티슈", "다이소");
	p.ShowData();

	std::cout << "class Book" << std::endl;
	Book b(15000, "책123", "한빛미디어");
	b.ShowData();

	HandPhone h(800000, "폰456", "삼성");
	h.ShowData();

	Computer c(1200000, "컴789", "LG");
	std::cout << c << std::endl;
	return 0;

}