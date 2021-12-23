#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long int Mobile_no;
    float basic_pay, da, hra, pf, staff_fund;
    float net_salary;

    float cal_net_salary()
    {
        da = basic_pay * 0.97;
        hra = basic_pay * 0.1;
        pf = basic_pay * 0.12;
        staff_fund = basic_pay * 0.01;
        net_salary = basic_pay + da -hra -pf -staff_fund;
        return net_salary;
    }

    Employee(string name, int id, string address, string email, int number, float bsal)
    {
        Emp_name = name;
        Emp_id = id;
        Address = address;
        Mail_id = email;
        Mobile_no = number;
        basic_pay = bsal;
    }

    public:
    void accept_details()
    {
        cout<<"------ ENTER-DETAILS ------"<<endl;
        cout<<"Enter Employee Name: "<<Emp_name;
        cin>>Emp_name;
        cout<<"Enter Employee ID: "<<Emp_id;
        cin>>Emp_id;
        cout<<"Enter Address: "<<Address;
        cin>>Address;
        cout<<"Enter Employee Mail ID: "<<Mail_id;
        cin>>Mail_id;
        cout<<"Enter Phone Number: "<<Mobile_no;
        cin>>Mobile_no;
        cout<<"Enter Basic Salary: "<<basic_pay;
        cin>>basic_pay;
    }

    void display()
    {
        cout<<"***Employee-Details***"<<endl;
        cout<<"Employee Name: "<<Emp_name<<endl;
        cout<<"Employee ID: "<<Emp_id<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Mail ID: "<<Mail_id<<endl;
        cout<<"Phone Number: "<<Mobile_no<<endl;
        cout<<"--------------x--------------"<<endl;
        cout<<"Basic Salary: "<<basic_pay<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"PF: "<<pf<<endl;
        cout<<"Staff Fund: "<<staff_fund<<endl;
        cout<<"Net Salary: "<<net_salary<<endl;
        cout<<"****************************"<<endl;
    }
};

class Programmer: public Employee
{
    public: 
    float salary_programmer;

    Programmer(string name, int id, string address, string email, int number, float bsal) : Employee(name, id, address, email, number, bsal)
    {
        bsal = salary_programmer;
    }

    // void salary_programmer()
    // {
    //     cout<<"Salary for programmer is: "<<net_salary<<endl;
    // }
};

class Team_Lead: public Employee
{
    public:
    float tl_sal;

    Team_Lead(string name, int id, string address, string email, int number, float bsal) : Employee(name, id, address, email, number, bsal)
    {
        bsal = tl_sal;
    }
    // void salary_teamLead()
    // {
    //     cout<<"Salary for Team lead is: "<<net_salary<<endl;
    // }
};

class Assistant_Project_Manager: public Employee
{
    public:
    float apm_sal;

    Assistant_Project_Manager(string name, int id, string address, string email, int number, float bsal) : Employee(name, id, address, email, number, bsal)
    {
        bsal = apm_sal;
    }
    // void salary_APM()
    // {
    //     cout<<"Salary for Assistant Project Manager is: "<<net_salary<<endl;
    // }
};

class Project_Manager: public Employee
{
    public:
    float pm_sal;

    Project_Manager(string name, int id, string address, string email, int number, float bsal) : Employee(name, id, address, email, number, bsal)
    {
        bsal = pm_sal;
    }
    // void salary_Proj_Manager()
    // {
    //     cout<<"Salary for Project Manager: "<<net_salary<<endl;
    // }
};

int main()
{
    Programmer programmer1;
    Team_Lead team_lead1;
    Assistant_Project_Manager APM1;
    Project_Manager PM1;

    
    return 0;
}