//Function_Overloading: Multiple functions of same function name with different parameters.
#include<iostream>
using namespace std;
class Addition
{
    public: 
    int Sum(int a, int b)
    {
        return a+b; 
    }
    int Sum(int a, int b ,int c)
    {
        return a+b+c;
    }
};

int main()
{
    Addition obj;
    cout<<obj.Sum(20,15)<<endl;
    cout<<obj.Sum(81,100,10);
    return 0;
}

/*
35
191
*/
