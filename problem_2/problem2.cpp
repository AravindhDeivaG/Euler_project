#include<iostream>

int main()
{
    int prev=1,curr=2,i=2,sum=2;
    int next;
    while(curr<4000000)
    {
        i++;
        next = prev+curr;
        prev=curr;
        curr=next;
        if( (i+1)%3 == 0 )
        {
            sum=sum+curr;
        }
    }

    std::cout<<"Sum of even numbers in Fibonacci series: "<<sum<<std::endl;
    return(0);
}