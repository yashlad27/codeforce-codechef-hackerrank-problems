#include<iostream>
using namespace std;

// pure virtual function:-- / ABSTRACT CLASS
class AbsractEmployee
{
	virtual void ask_for_promotion() = 0;
};

class employee:AbsractEmployee
{
	private: // encapsulation:
	//string Name;
	string Company;
	int Age;

	protected:
	string Name;
	public:
	//setter:
	void setName(string name)
	{
		Name = name;
	}
	//getter:
	string getName()
	{
		return Name;
	}
	//setter:
	void setCompany(string company)
	{
		Company = company;
	}
	//getter:
	string getCompany()
	{
		return Company;
	}
	//setter:
	void setAge(int age)
	{
		if(age>=18)
		Age = age;
	}
	//getter:
	int getAge()
	{
		return Age;
	}
	
	void introduce_you()
	{
		cout<<"Name- "<<Name<<endl;
		cout<<"Company- "<<Company<<endl;
		cout<<"Age- "<<Age<<endl;
	}

	employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

	void ask_for_promotion()
	{
		if(Age>30)
			cout<<Name<<" got Promoted!"<<endl;
		else
			cout<<Name<<" Rejected"<<endl;
	}
};

class Developer:public employee 
{
	public:
	string FavProgrammingLang;

	Developer(string name, string company, int age, string favProgramminglang) : employee(name, company, age)
	{
		FavProgrammingLang = favProgramminglang;
	}
	void fixbug()
		{
			// using getter method:--
			cout<<getName()<<" fixed bug using"<< FavProgrammingLang<< endl;

			cout<<"*******************************\n"; 
			// using Name method defined in employee class:--
			cout<<Name<<" fixed bug using"<< FavProgrammingLang<< endl;
		}
};

class Teacher:public employee
{
	public:
	string Subject;

	Teacher(string name, string company, int age, string subject) : employee(name, company, age)
	{
		Subject = subject;
	}
	void Prep_lesson()
	{
		cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
		cout<<"************************************\n";
	}
};
int main()
{
	// Classes and Objects:--
	/*employee employee1=employee("Yash", "Amazon", 19);
	// employee1.Name = "Yash";
	// employee1.Company = "Amazon";
	// employee1.Age = 19;
	employee1.introduce_you();

	employee employee2=employee("John", "Youtube", 25);
	// employee2.Name = "John";
	// employee2.Company = "Youtube";
	// employee2.Age = 25;
	employee2.introduce_you();

	// encapsulation:--
	employee1.setAge(39);
	cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old";

	// Abstraction:--
	employee1.ask_for_promotion();
	employee2.ask_for_promotion();*/

	// Inheritance:--
	Developer d = Developer("Alex" , "Flipkart", 25, "C++");
	d.fixbug();

	d.ask_for_promotion();

	Teacher t = Teacher("Jack", "SchoolA", 28, "Maths");
	t.Prep_lesson();

	return 0;
}