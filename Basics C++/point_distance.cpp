#include<iostream>
#include<math.h>

//using namespace std;

class point{
    int a,b;
    public :
        point()
        {
            a = 0;
            b = 0;
        }
        point(int x,int y = 10)
        {
            a = x;
            b = y;
        }
      //  point(int x)
       // {
       //     a = x;
       //     b = 0;
       // }
        void display_point()
        {
            std :: cout<<" x coordinate - "<<a <<" & y coordinate - "<<b<<std :: endl;
        }
        int dist_origin()
        {
           return sqrt(a*a + b*b);
        }
};

int main()
{
    point(55,6).display_point();
    point p(1,3);
    point q(12,5);
    p.display_point();
    q.display_point();

    std :: cout<<q.dist_origin()<<std::endl;
    std :: cout<<point(15).dist_origin();
}