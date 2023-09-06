#include<iostream>

long long int rec(int m, int n)
{
    if(m==1)
    {
        return(n+1);
    }
    else if (n==1)
    {
        return(m+1);
    }
    else
    {
        //std::cout<<m<<" | "<<n<<std::endl;
        return(rec(m-1,n)+rec(m,n-1));
    }
    
}

int main()
{
    int m,n;
    std::cout<<" Enter m : ";
    std::cin>>m;
    std::cout<<" Enter m : ";
    std::cin>>n;
    std::cout<<"Number of ways = "<<rec(m,n);
    return(0);
}