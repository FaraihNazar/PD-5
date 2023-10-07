#include <iostream>
using namespace std;
float vol(float length, float width, float height);
float cubicKilometers(float x);
float cubicCentimeters(float y);
float cubicMillimeters (float z);
int main()
{   float  l,w,h;
    string desired_length;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>l;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>w;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>h;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>desired_length;
     float volume=  vol(l,w,h);
    if (desired_length == "km")
    {       
        float  volinkm = cubicKilometers(volume);
        cout<<"The volume of the pyramid is: "<<volinkm <<" cubic kilometer";
    }

    if (desired_length=="cm")
    {
        float volincm =cubicCentimeters(volume);
        cout<<"The volume of the pyramid is: "<<volincm<<" cubic centimeters";

    }
    if (desired_length=="mm")
    {
        float volinCubicMillimeters=cubicMillimeters(volume);
        cout<<"The volume of the pyramid is: "<<volinCubicMillimeters<<" cunic millimeters";
    }
    if (desired_length=="meters")
    {
      cout<<"The volume of the pyramid is: "<<volume<<" meters ";
    }
}
float vol(float length, float width, float height)
{
    float X= (length*width*height) / 3;
    return X ;
}

   float cubicKilometers(float x) 
   {
       float volumeinKm = x / (1000  * 1000 *  1000) ;
       return volumeinKm;
    }
    float cubicCentimeters(float y)
    {
      float volumeinCm =y/(0.01*0.01*0.01);
      return volumeinCm;
    }
    float cubicMillimeters (float z)
   {
    float volinMillimeters= z/(0.01*0.01*0.01);
    return volinMillimeters;
  }

