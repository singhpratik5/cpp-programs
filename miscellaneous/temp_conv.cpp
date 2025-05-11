#include<iostream>
using namespace std;

float Far_to_cel(float data)
{
    float cel = (data - 32)*5/9;
    return cel;
}

float Cel_to_far(float data)
{
    float far = (9*data)/5 + 32;
    return far;
}

int main()
{
    cout<<Far_to_cel(98)<<endl;
    cout<<Cel_to_far(37);
}