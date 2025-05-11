#include<iostream>
#include<string>
using namespace std;

string below_twenty[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

string below_hundred[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};

string above_thousand[] ={"Hundred","Thousand","Million","Billion"};

string int_to_word(int num)
{
    if(num<20)
    {
        return below_twenty[num];
    }
    else if(num<100)
    {   if(num%10==0)
        return below_hundred[num/10];
        else
        return below_hundred[num/10] + " " + below_twenty[num%10];
    }
    else
    {
        
    }
}

int main()
{
    int num;
    cout<<"enter the number to convert to words"<<endl;
    cin>>num;
    cout<<int_to_word(num)<<endl;
}