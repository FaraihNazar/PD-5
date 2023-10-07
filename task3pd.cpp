#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
int main()
{   char vechile_type;
    int price;
    cout<<"Enter the vechicle type code (M,E,S,V,T): ";
    cin>>vechile_type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    float X=taxcalculator(vechile_type,price);
    cout<<"The final price of a vehicle of type "<<vechile_type<<" after adding the tax is "<<X;
}
float taxcalculator(char type,float price)
{   float final_price;
    if (type =='M')
    {
        return final_price=price+(price*0.06);
    }
    if (type =='E')
    {
        return final_price=price+(price*0.08);
    }
    if (type =='S')
    {
        return final_price=price+(price*0.1);
    }
    if (type =='V')
    {
        return final_price=price+(price*0.12);
    }
    if (type =='T')
    {
        return final_price=price+(price*0.15);
    }
    return final_price;
}