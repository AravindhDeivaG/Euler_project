#include<iostream>

int main()
{
    int count=0;
    for(int i=1; i<1000 ; i++)
    {
        if(i%3==0 or i%5==0)
        {
            count+=i;
        }
    }
    std::cout<<"Sum of natural numbers either divisible by 3 or 5 below 1000 : "<<count<<std::endl;
}