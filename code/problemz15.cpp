#include<iostream>

int main()
{
    int m,n;
    std::cout<<"Enter m : ";
    std::cin>>m;
    std::cout<<"Enter n : ";
    std::cin>>n;
    long long int a[n+1]={0};
    a[0]=1;
    for(int i=0;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[j] = a[j]+a[j-1];
        }
    }
    std::cout<<a[n];
    return(0);
}