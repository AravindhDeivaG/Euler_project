#include<iostream>
#include<vector>

int main()
{
    std::vector<int> prime={2};
    bool is_prime;
    int i=1,num=3;

    while(i<10001)
    {
        is_prime=true;
        for(int j=0;j<prime.size();j++)
        {
            if(num%prime[j]==0)
            {
                is_prime=false;
                break;
            }
        }
        if(is_prime)
        {
            prime.push_back(num);
            i+=1;
        }
        num+=2;
    }
    std::cout<<"10001'st prime number : "<<prime[prime.size()-1]<<"   :   "<<i;
    return(0);
}