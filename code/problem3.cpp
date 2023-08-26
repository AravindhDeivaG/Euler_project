#include<iostream>
#include<vector>

int main()
{
    long long int num=600851475143;
    int i=3;
    bool is_prime=true;
    std::vector<int> prime_numbers;
    prime_numbers = {2};

    while(num%2==0)
    {
        num=num/2;
    }
    //std::cout<<num<<std::endl;
    while(num>1 or num>i)
    {
        for(int j=0;j<prime_numbers.size();j++)
        {
            if(i%prime_numbers[j]==0)
            {
                is_prime=false;
                break;
            }
        }
        if(is_prime)
        {
            prime_numbers.push_back(i);
            while(num%i==0)
            {
                num=num/i;
            }
        }
        i+=2;
        //std::cout<<i<<std::endl;
        is_prime=true;
    }
    std::cout<<"Highest prime factor of "<<num<<" is "<<prime_numbers[prime_numbers.size()-1];
    return(0);
}

/*

600851475143

*/