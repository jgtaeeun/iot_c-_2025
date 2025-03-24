//#include <iostream>
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int g) : gasolineGauge(g) {}
//	int getGasGauge() { return gasolineGauge; }
//};
//
//class HybirdCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybirdCar(int g, int e) : Car(g) , electricGauge(e) { }
//	int getElectricGause() { return electricGauge;  }
//};
//
//class HybirdWaterCar : public HybirdCar {
//private:
//	int waterGauge;
//public:
//	HybirdWaterCar(int ag, int ae, int aw) : HybirdCar(ag, ae) , waterGauge(aw) {}
//	int getWaterGauge() { return waterGauge; }
//	void showData() {
//		std::cout << "ÀÜ¿© °¡¼Ö¸°: " << getGasGauge() << std::endl;
//		std::cout << "ÀÜ¿© Àü±â·®: " << getElectricGause() << std::endl;
//		std::cout << "ÀÜ¿© ¿öÅÍ·®: " << getWaterGauge() << std::endl;
//
//
//		std::cout << waterGauge << std::endl;
//	}
//};
//
//int main(void) {
//
//	HybirdWaterCar c(10, 20, 30);
//	c.showData();
//	return 0;
//}