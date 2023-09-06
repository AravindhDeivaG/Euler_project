#include<iostream>
#include<vector>

int main()
{
    int n=2;
    long int num;

    std::vector<int> prime={2,3};

    //std::cout<<"Checkout 1"<<std::endl;
    while (true)
    {
        bool is_prime;
        int n1=n,n2=n+1;
        for(int i=prime[prime.size()-1];i<=n+1;i+=2)
        {
            is_prime=true;
            for(int j=0;j<prime.size();j++)
            {
                if(i%prime[j]==0)
                {
                    is_prime=false;
                    break;
                }
            }
            if(is_prime)
            {
                prime.push_back(i);
            }
        }
        //std::cout<<"Checkout 2"<<std::endl;
        if(n%2==0){n1/=2;}
        else{n2/=2;}

        int i=0,factors=1,factors_i=1;
        while(n1!=1)
        {
            factors_i=1;
            while(n1%prime[i]==0)
            {
                n1/=prime[i];
                factors_i++;
            }
            //std::cout<<"Checkout 4.1 "<<n<<" | "<<n+1<<" | "<<prime[prime.size()-1]<<std::endl;
            factors*=factors_i;
            i++;
        }
        //std::cout<<"Checkout 3"<<std::endl;
        i=0;
        while(n2!=1)
        {
            factors_i=1;
            while(n2%prime[i]==0)
            {
                n2/=prime[i];
                factors_i++;
            }
            //std::cout<<"Checkout 4 "<<n1<<" | "<<n2<<" | "<<prime[prime.size()-1]<<std::endl;
            factors*=factors_i;
            i++;
        }
        
        if(factors>=500)
        {
            break;
        } 
        n++;
        //std::cout<<n<<" | ";
    }
    std::cout<<"Least Triangle number with 500 factors : "<<n*(n+1)/2;

    return(0);
}