#include<iostream>
#include<string>

using namespace std;

class employee
{
public:
	string user_name;
	int user_num;
	string user_qualifications;
	string user_address;
	int user_phone;
	long int user_salary;



	employee()
	{
		user_name = "abc";
		user_num = 001;
		user_qualifications = "DEF";
		user_address = "MIT";
		user_phone = 2;
		user_salary = 19999;
	}

	employee(string ename, int enumber, string quali, string addr, int phnum, long int salary)
	{
		user_name = ename;
		user_num = enumber;
		user_qualifications = quali;
		user_address = addr;
		user_phone = phnum;
		user_salary = salary;
	}

	void display()
	{
		cout << "-----DETAILS-----" << endl;
		cout << "Employee-Name: " << user_name << endl;
		cout << "Employee-Number: " << user_num << endl;
		cout << "Qualification: " << user_qualifications << endl;
		cout << "Employee-Address: " << user_address << endl;
		cout << "Phone-Number: " << user_phone << endl;
		cout << "Employee-Salary: " << user_salary << endl;
		cout << "***" << endl;
	}

};

int main()
{
	employee employee1;
	employee1.display();

	employee employee2("fgh", 777, "gfg", "frf", 222, 9999);
	employee2.display();

	employee employee3(employee2);
	employee3.display();

	return 0;
}