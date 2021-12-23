#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

struct Salary
{
    double basic, da, ta;

    double net() const
    {
        return basic + da + ta;
    }
};

class Employee
{
private:
    string name, number, address;
    Salary salary;
    static size_t count;

public:
    Employee();
    Employee(string name, string number, string address,
    double basic_salary, double da_salary, double ta_salary);
    Employee(const Employee&);
    ~Employee();

    void readFromInput();
    friend std::ostream& operator << (std::ostream& os, const Employee& employee);
    static size_t getCount();
};

void clear() { system("clear"); }

int main()
{
    cout << "How many employees? ";
    size_t n;
    cin >> n;
    cin.ignore(1);

    Employee *employees = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        clear();
        cout << "Employee #" << i + 1 << ":\n"
             << "------------\n";

        employees[i].readFromInput();
    }

    clear();
    cout << "Here are the details you've entered:\n\n";    
    for (int i = 0; i < n; i++)
    {
        cout << "Employee #" << i + 1 << ":\n"
             << "------------\n"
             << employees[i] << endl;
    }

    cout << Employee::getCount() << " objects have been created\n\n";
    delete[] employees;
    cout << endl << Employee::getCount() << " objects remain\n";
}

/* sample input:
3
Shounak
0987654321
123, X Building, Y Rd, Z City
3802.3
863.6
293.4
Bob
1234567890
456, A Building, B Rd, C City
8575.2
503.4
92.3
Alice
6789054321
789, O Building, P Rd, Q City
7346.6
40.5
564.1

*/

size_t Employee::count = 0;
size_t Employee::getCount() { return count; }

// Default Constructor
Employee::Employee() {
    count++;
}

// Parameterized Constructor
Employee::Employee(string name, string number, string address, double basic_salary, double da_salary, double ta_salary)
    : name(name), number(number), address(address),
      salary({basic_salary, da_salary, ta_salary})
{
    count++;
}

// Copy Constructor
Employee::Employee(const Employee& other)
    : name(other.name), number(other.number), address(other.address), salary(other.salary)
{
    count++;
}

// Destructor
Employee::~Employee() {
    cout << "The '" << name << "' object has been destroyed.\n";
    count--;
}


#if 1

// Default constructor
void Employee::readFromInput()
{
    cout << "Name:    ";
    getline(cin, name);

    cout << "Number:  ";
    getline(cin, number);

    cout << "Address: ";
    getline(cin, address);

    cout << "Basic Salary: ";
    cin >> salary.basic;

    cout << "DA Salary:    ";
    cin >> salary.da;

    cout << "TA Salary:    ";
    cin >> salary.ta;
    cin.ignore(1);
}
#else

// Parameterized and copy constructors
void Employee::readFromInput()
{
    string name, number, address;
    double salary;

    cout << "Name:    ";
    getline(cin, name);

    cout << "Number:  ";
    getline(cin, number);

    cout << "Address: ";
    getline(cin, address);

    cout << "Salary:  ";
    cin >> salary;
    cin.ignore(1);

    *this = Employee(name, number, address, salary);
}
#endif


// overload the << operator to print Employee objects using cout
std::ostream& operator << (std::ostream& os, const Employee& employee) { 
    os  << "Name:    " << employee.name    << endl
        << "Number:  " << employee.number  << endl
        << "Address: " << employee.address << endl
        << "Salary:\n"
        << " -> Basic: " << employee.salary.basic << endl
        << " -> DA:    " << employee.salary.da << endl
        << " -> TA:    " << employee.salary.ta << endl
        << " -> Net:   " << employee.salary.net() << endl;
    return os;
}