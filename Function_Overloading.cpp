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
    cout<<obj.Sum(20,67)<<endl;
    cout<<obj.Sum(91,180,7);
    return 0;
}

/*
87
278
*/
