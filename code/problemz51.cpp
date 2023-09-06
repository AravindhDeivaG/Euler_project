#include<iostream>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>

int main()
{
    long int n=100000;
    bool prime[n];
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++)
    {
        if(prime[p])
        {
            for(int i=p*p;i<=n;i+=p)
            prime[i]=false;
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(prime[i])
        {
            if(i>max)
            max=i;
        }
    }
    std::cout<<max;
    return(0);
}