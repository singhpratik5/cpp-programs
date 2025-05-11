#include<iostream>
using namespace std;

int count = 0;
class number{
    public :
       
        number()
        {
            count++;
            cout<<" Constructor called for"<<count<<endl;
        }

        ~number()
        {
            cout<<" Destructor called for object "<<count<<endl;
            count--;
        }

        void printnum()
        {

        }
};

int main()
{
    cout<<" inside main function"<<endl;
    cout<<" creating first object 'a'"<<endl;
    number a;
    {
        cout<<" Entering the block"<<endl;
        cout<<" creating two more objects"<<endl;
        number c1,c2;

        cout<<" exiting this block"<<endl;
    }
    cout<<" again back to main fxn."<<endl;
        return(0);
}