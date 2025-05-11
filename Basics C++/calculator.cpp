#include<iostream>
using namespace std;
#include<math.h>

class simp_calci{

    public :
        float add(int a,int b)
        {
            return a+b;
        }

        float substract(int a ,int b)
        {
            return a - b;
        }
        float multiply(int a,int b)
        {
            return a*b;
        }
        float divide(int a,int b)
        {
            return a/b;
        }
};

class scientific_calci{
    public :
        int reminder(int a,int b)
        {
            return a%b;
        }
        int power(int a,int b)
        {
            return(pow(a,b));
        }
        int sq_rt(int a)
        {
            return sqrt(a);
        }
        float exponent(int b)
        {
            return exp(b);
        }
};

class hybrid_calci : public simp_calci,public scientific_calci{
    public :

};

int main()
{
    hybrid_calci calci;

    cout<<calci.add(1,2)<<endl;
    cout<<calci.exponent(5)<<endl;

    exit(0);
}