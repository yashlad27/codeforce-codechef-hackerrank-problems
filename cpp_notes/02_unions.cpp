#include<iostream>
using namespace std;

typedef struct employee
{
    // data
    int eid;
    char favchar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice=34;
    m1.car='x';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m18 = breakfast;

    return 0;
}