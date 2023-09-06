#include<iostream>
#include<vector>
#include<math.h>

int main()
{
    std::vector<int> prime={2};
    bool is_prime;
    long long int sum=2;
    for(int i=3;i<=2000000;i+=2)
    {
        int j=0;
        is_prime=true;
        while(prime[j]<=std::sqrt(i))
        {
            if(i%prime[j]==0)
            {
                is_prime=false;
                break;
            }
            j++;
        }
        if(is_prime)
        {
            prime.push_back(i);
            sum+=i;
        }
    }
    std::cout<<"Sum of all prime numbers below 2000000 = "<<sum<<std::endl;
    return(0);
}