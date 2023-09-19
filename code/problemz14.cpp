#include<iostream>
#include<vector>

typedef std::vector<int> uInt;

void print(uInt vec)
{
    for(long int i=0;i<vec.size();i++)
        std::cout<<vec[i]<<" | ";
}

int main()
{
    uInt chain_length={1};
    chain_length.insert(chain_length.end(),999999,0);

    int count,max_length=-1,max_ind=-1;;
    long long int n=1;
    for(int i=1;i<1000000;i++)
    {
        count=0;
        n=i;

        while(1)
        {
            if(n<1000000)
            {
                if(chain_length[n-1]!=0)
                {
                    chain_length[i-1]=chain_length[n-1]+count;
                    break;
                }
            }

            if(n%2==0)
            {
                n/=2;
                count++;
            }
            else
            {
                n=(3*n+1)/2;
                count+=2;
            }
        }

        if(chain_length[i-1]>max_length)
        {
            max_length=chain_length[i-1];
            max_ind=i;
        }
    }

    std::cout<<"The number with maximum chain length is "<<max_ind<<" with chain length = "<<max_length<<std::endl;
    std::cout<<chain_length[837798];
    return(0);
}
