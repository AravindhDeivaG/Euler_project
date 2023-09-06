#include<iostream>
#include<math.h>

int main()
{
    int a,b,c;
    //int iters=0;
    for(c=(int)1000/3;c<=500;c++)
    {
        for(a=1;a<=250;a++)
        {
            //iters++;
            //std::cout<<iters<<" | ";
            b=1000-a-c;
            if(a*a+b*b==c*c)
            {
                std::cout<<"a = "<<a<<" | b = "<<b<<" | c = "<<c<<std::endl;
                std::cout<<"abc = "<<a*b*c<<std::endl;
                return(0);
            }
        }
    }
    return(0);
}