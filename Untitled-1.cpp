// OOP Assignment
#include<iostream>
using namespace std;
 class Person
 {

 private:
 string name;
 int age;
public:
 Person(string name , int age)
 {
 this->name=name;
 this->age=age;
 }
 void setname(int n)
 {
    name=n;
 }
 string getname()
 {
    return name;
 }
 void setage(int a)
 {
    age=a;
 }
 int  getage()
 {
    return age;
 }
 void display2()
 {
    cout<<"enter the person name:"<<name<<endl;
    cout<<"enter the age:"<<age<<endl;
 }
};
class Engine 
{
public:
int price;
int model;
   Engine(int price , int model)
   {

    this->price=price;
    this->model=model;
   }
    void setprice(int p) 
    {
        price=p;
    }
    int getprice()
    {
        return price;
    }
     void setmodel(int m) 
     {

        model=m;
    }
    int getmodel()
    {
        return model;
    }
    void display()
    {
        cout<<"enter engine price:"<<price<<endl;
        cout<<"enter engine model:"<<model<<endl;
    }
};

class Car 
{
    private:
            int c_price;
            int c_model;
            string color;
            Engine e;
            Person*p;
public:
      Car(int c_price , int c_model , string color ,int p2,int cm , string n, int a) : e(p2, cm)
   {
    this->c_price=c_price;
    this->c_model=c_model;
    this->color=color;
    p=new Person(n,a);
    
   }
    void setc_price(int p) 
    {
        c_price=p;
    }
    int getc_price()
    {
        return c_price;
    }
     void setc_model(int m) {

        c_model=m;
    }
    int getc_model()
    {
        return c_model;
    }
     void setcolor(int c) {

        color=c;
    }
     string getcolor()
    {
        return color;
    }
    void display1()
    {
        cout<<"enter car price:"<<c_price<<endl;
        cout<<"enter car model:"<<c_model<<endl;
         cout<<"enter car color:"<<color<<endl;
         cout<<"enter engine price:"<<e.getprice()<<endl;
        cout<<"enter engine model:"<<e.getmodel()<<endl;
        cout<<"enter person name:"<<p->getname()<<endl;
        cout<<"enter person age:"<<p->getage()<<endl;

    }
};
int main() 
{
   // Car c(400,2012,"black",200,2012);
	//c.display1();
    Car c(400,2012,"black",200,2012,"Ali", 21);
	c.display1();
    return 0;
}
