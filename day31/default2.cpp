//#include <iostream>
//
//
//int coordinates(int x, int y=0, int z=0);  //디폴트 값은 함수의 선언 부분에만 표현하면 된다.
//
//int main(void) {
//
//	std::cout << "coordinates(10,20,30):" << coordinates(10, 20, 30) << std::endl;
//	std::cout << "coordinates(10, 20, def):" << coordinates(10,20) << std::endl;
//	std::cout << "coordinates(10, def, def):" << coordinates(10) << std::endl;
//	
//
//	return 0;
//}
//
//int coordinates(int x, int y, int z) {
//
//	int res;
//	res =pow(x, 2) + pow(y, 2) + pow(z, 2);		//제곱
//	return sqrt(res);							//제곱근
//}