#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>


using namespace std;

int main() {
    try {
        // MySQL ����̹� ��ü ����
        sql::mysql::MySQL_Driver* driver;
        sql::Connection* con;

        // MySQL ����̹� �ν��Ͻ� ��������
        driver = sql::mysql::get_mysql_driver_instance();

        // �����ͺ��̽� ����
        con = driver->connect("tcp://127.0.0.1:3306", "madang", "12345");

        // ����� ��Ű��(�����ͺ��̽�) ����
        con->setSchema("madang");

        cout << "Connection successful!" << endl;

        // ���� ��ü ����
        delete con;
    }
    catch (sql::SQLException& e) {
        cerr << "MySQL Connection failed: " << e.what() << endl;
    }

    return 0;
}
