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