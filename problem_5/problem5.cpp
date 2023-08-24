#include<iostream>
#include<vector>

int main()
{
    std::vector<int> prime_factros={2};
    long int product=1;
    int num=20;
    bool is_prime;
    for(int i=3;i<=num;i++)
    {
        int k=i;
        for(int j=0;j<prime_factros.size();j++)
        {
            if(k%prime_factros[j]==0)
            {
                k/=prime_factros[j];
            }
        }
        if(k>1)
        {
            prime_factros.push_back(k);
        }
    }

    for(int i=0;i<prime_factros.size();i++)
    {
        product*=prime_factros[i];
    }
    std::cout<<"Minimum number divisible by all numbers till "<<num<<" = "<<product;
}