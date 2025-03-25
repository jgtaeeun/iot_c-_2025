#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>


using namespace std;

int main() {
    try {
        // MySQL 드라이버 객체 생성
        sql::mysql::MySQL_Driver* driver;
        sql::Connection* con;

        // MySQL 드라이버 인스턴스 가져오기
        driver = sql::mysql::get_mysql_driver_instance();

        // 데이터베이스 연결
        con = driver->connect("tcp://127.0.0.1:3306", "madang", "12345");

        // 사용할 스키마(데이터베이스) 설정
        con->setSchema("madang");

        cout << "Connection successful!" << endl;

        // 연결 객체 삭제
        delete con;
    }
    catch (sql::SQLException& e) {
        cerr << "MySQL Connection failed: " << e.what() << endl;
    }

    return 0;
}
