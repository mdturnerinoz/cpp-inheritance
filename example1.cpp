/*

Inheritance is the property by which a class can inherit data members and functions of another class.

In this case, the class which is inherited is known as base class while the class which inherits is 
known as derived or child class.

In this tutorial let us study the concept of inheritance in C++ programming with an example program.

Here is an example of how inheritance can take place :

So we see that there is a class named ‘fourwheeler’ which is derived publicly by class ‘car’. This 
actually makes sense as in reality also a car should have all the generic characteristics of a 
fourwheeler. So, in terms of C++ programming, once we create a class ‘fourwheeler’ its members can 
be reused in any specific fourwheeler category class (like a car). This way C++ empowers you to 
reuse any required code. This also helps in keeping the code simple and maintainable.

One thing you might be wondering (or might have missed here) is that I have used the term 
‘derived publicly’ in the last paragraph. What do we mean by it? Well, as we discussed in C++ 
introduction article, there are three access specifiers ie public, private and protected. While 
deriving a class, these specifiers are used to convey what all needs to be inherited and in which 
manner.

Here are the three points that you need to remember :

* If base class is derived publicly, the public members of base class become public members of 
  derived class. Similarly, the protected members of base class become protected members of 
  derived class. But, private members of base class are not inherited.

* If base class is derived in protected mode, both the public and protected members of base 
  class become protected members of derived class. But, private members of base class are not 
  inherited.

* If base class is derived in private mode, both the public and protected members of base class 
  become private members of the derived class. But, again, private members if the base class 
  are not inherited.

*/

#include<iostream>

class fourwheeler
{
public:
    int category;
    int eurolevel;

    inline int getCategory(void)
    {
        return category;
    }
    inline char getEuroLevel(void)
    {
        return eurolevel;
    }
};

class car : public fourwheeler
{
public :
    char* brand;
    char* model;

    char* getBrand(void);
    char* getModel(void);
};

int main(void)
{
    car obj_car;
    obj_car.category = 1;
    obj_car.eurolevel = 3;

    std::cout <<"\n The fourwheeler category is "<<obj_car.category;
    std::cout << "\n The fourwheeler eurolevel is "<<obj_car.eurolevel<<"\n";
    return 0;
}