#include<iostream>

int main()
{
    long int sum=0,sum_sq=0;
    for(int i=1;i<=100;i++)
    {
        sum+=i;
        sum_sq+=i*i;
    }
    std::cout<<"Difference between square of sum and sum of square of first 100 natural numbers is : "<<sum*sum-sum_sq;
    return(0);
}