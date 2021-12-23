#include<iostream>
using namespace std;

//operator overloading:-

class box
{
    public:
    double length;
    double breadth;
    double height;

    void boxlength()
    {
        cout<<"Enter length of box: "<<endl;
        cin>>length;
    }
    void boxbreadth()
    {
        cout<<"Enter breadth of box: "<<endl;
        cin>>breadth;
    }
    void boxheight()
    {
        cout<<"Enter height of box: "<<endl;
        cin>>height;
    }

    double addVOL()
    {
        return length*breadth*height;
    }

    // double addDIM(int len, int bre, int hei)
    // {
         //   return len
    // }

    box operator + (box bx)
    {
        box b;
        b.length=length+bx.length;
        b.breadth=breadth+bx.breadth;
        b.height=height+bx.height;
        return(b);
    }

    box operator <<(const box& b)
    {
        box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
    void display();
};

void box :: display()
{
    cout<<"\n Length = "<<length;
    cout<<"\n Breath = "<<breadth;
    cout<<"\n Height = "<<height;
}

int main()
{
    box box1;
    box box2;
    box box3;
    int volume1 =0;
    int volume2 =0;

    // box1.boxlength(6.0);
    // box1.boxbreadth(7.0);
    // box1.boxheight(5.0);

    // box2.boxlength(3.0);
    // box2.boxbreadth(5.0);
    // box2.boxheight(4.0);

    // box3 = box1 + box2;

    // cout<<"\n BOX:1 ";box1.display();
    // cout<<"\n BOX:2 ";box2.display();
    // cout<<"\n BOX:3 ";box3.display();
    
    // volume1 = box1.addVOL();
    // cout<<"Volume of box1 is: "<<volume1<<endl;

    // volume2 = box2.addVOL();
    // cout<<"Volume of box2 is: "<<volume2<<endl;

    //USER INPUT:- 
    box1.boxlength();
    box1.boxbreadth();
    box1.boxheight();

    box2.boxlength();
    box2.boxbreadth();
    box2.boxheight();

    volume1 = box1.addVOL();
    cout<<"Volume of box1 is: "<<volume1<<endl;

    volume2 = box2.addVOL();
    cout<<"Volume of box2 is: "<<volume2<<endl;
    return 0;
}