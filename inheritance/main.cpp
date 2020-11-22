#include <iostream>

using namespace std;
class car{
int mno;
int mileage;
char name[20];
char colour[20];
public:
void accept(){
cout<<"enter car no ,mileage ,name ,colour"<<"\n";
cin>>mno>>mileage;
cin>>name>>colour;
}
void display(){
cout<<"Display details"<<"\n";
cout<<"model no is: "<<mno<<"\n";
cout<<"mileage no is: "<<mileage<<"\n";
cout<<"name no is: "<<name<<"\n";
cout<<"colour no is: "<<colour<<"\n";


}

};
class newcar : car{
int wheel;
int price;
public:
    void acceptnewcar(){
    accept();
    cout<<"enter wheel and price"<<"\n";
    cin>>wheel;
    cin>>price;
    }
    void displaynewcar(){
    display();
    cout<<"wheel is "<< wheel<<"\n";
    cout<<"price is "<<price<<"\n";

    }

};

int main()
{
    newcar C;
    C.acceptnewcar();
    C.displaynewcar();
    return 0;
}
