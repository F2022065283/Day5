// Chaudhary Shoaib Hamza
// F2022065283
#include<iostream>
using namespace std;
 class Fruit
 {
 private:
 int price;
 int size;
 int sweetness;
public:
  Fruit()
  {

  }
Fruit(int price , int size , int sweetness)
{
    this->price=price;
    this->size=size;
    this->sweetness=sweetness;
    }
    friend class ExtraFunction;
};
 class ExtraFunction
 {
    public:
    Fruit comparesize(Fruit obj1, Fruit obj2)
    {
        if(obj1.size>obj2.size)
        return obj1;
        else
        return obj2;
    }
    Fruit compareprice(Fruit obj1, Fruit obj2)
    {
        if(obj1.price>obj2.price)
        return obj1;
        else
        return obj2;
    }
    Fruit comparesweetness(Fruit obj1, Fruit obj2)
    {
        if(obj1.sweetness>obj2.sweetness)
        return obj1;
        else
        return obj2;
    }
        void display(Fruit obj)
    {
        cout<<"Friut Price = "<<obj.price<<endl;
        cout<<"Friut Size = "<<obj.size<<endl;
        cout<<"Friut Sweetness = "<<obj.sweetness<<endl;
    }
 
};
int main()
{
    Fruit f1(80,2,3),f2(100,4,5),f3;
    ExtraFunction obj,obj2;
    f3=obj.comparesize(f1,f2);
    f3=obj.compareprice(f1,f2);
    f3=obj.comparesweetness(f1,f2);
    obj2.display(f3);

}