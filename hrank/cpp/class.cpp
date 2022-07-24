#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    private: 
    int age, standard;
    string Fname, Lname;

    public:
        void set_age(int Age){
            age = Age;
        }
        int get_age(){
            return age;
        }
        void set_standard(int Standard){
            standard = Standard;
        }
        int get_standard(){
            return standard;
        }
        void set_first_name(string first_name){
            Fname = first_name;
        }
        string get_first_name(){
            return Fname;
        }
        void set_last_name(string last_name){
            Lname = last_name;
        }
        string get_last_name(){
            return Lname;
        }
        void to_string(){
            cout<<age<<","<<Fname<<","<<Lname<<","<<standard<<endl;
        }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    //cout<<st.to_string();
    st.to_string();
    return 0;
}