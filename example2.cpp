/*

So we see that the public members of class ‘fourwheeler’ were easily accessed as public members 
of class ‘car’. Similarly we can do protected and private inheritance using protected and 
private access specifiers.

One important thing to understand here is how to decide whether public or protected or private 
inheritance is required? Here is the answer :

* When the inheritance is public, the derived class and every body else can access the public 
  members of base class through derived class because these members now become the public 
  members of derived class. So, it for you to decide if you want this kind of visibility or not?

* When the inheritance is protected, only the derived class and it’s children can access these 
  members as these now become the protected members of derived class. Other than them, no one 
  else can access them directly. So, again, its for you to decide if you want this kind of 
  visibility.

* Similarly, when the inheritance is private, only and only the derived class can access these 
  members as these now become the private members of derived class and hence cannot be derived 
  further. Also, no one else can use them ever. So, here again, it’s for you to decide when to opt 
  for private inheritance.

Moving ahead, the example we just discussed earlier represents single inheritance. There can 
be multiple inheritance too. This means that a single class can inherit from more than one 
class simultaneously. Here is an example of that :

*/

#include<iostream>

class sedans
{
public:
    int total_num_sedans;
    int in_production_sedans;
    int ready_sedans;

    int get_total_num_sedans(void)
    {
        return total_num_sedans;
    }
    int get__num_sedans_in_production(void)
    {
        return in_production_sedans;
    }
    int get_num_sedans_ready(void)
    {
        return ready_sedans;
    }
};

class suvs
{
public:
    int total_num_suvs;
    int in_production_suvs;
    int ready_suvs;

    int get_total_num_suvs(void)
    {
        return total_num_suvs;
    }
    int get__num_suvs_in_production(void)
    {
        return in_production_suvs;
    }
    int get_num_suvs_ready(void)
    {
        return ready_suvs;
    }
};

class honda : public sedans, public suvs
{
public :
    int ovrall_total_cars;
    int ovrall_total_production;
    int ovrall_total_ready;

    int get_ovrall_num_cars(void)
    {
        return (ovrall_total_cars = total_num_suvs + total_num_sedans);
    }
    int get_ovrall_in_production(void)
    {
        return (ovrall_total_production = in_production_suvs + in_production_sedans);
    }
    int get_ovrall_ready(void)
    {
        return (ovrall_total_ready = ready_suvs + ready_sedans);
    }

};   

int main(void)
{
    honda cmpny_stats;

    cmpny_stats.total_num_sedans = 5;
    cmpny_stats.total_num_suvs = 10;

    std::cout<<"\n Overall honda cars = "<<cmpny_stats.get_ovrall_num_cars()<<"\n";
    return 0;
}