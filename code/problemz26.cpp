#include<iostream>
#include<vector>

int main()
{
    int num,numer,denom,quo,rem;
    int max_len=-1,max_num=-1,cycle_len;
    std::vector<int> dig_arr, rem_arr;
    
    for(num=980;num<985;num++)
    {
        numer = 1;
        denom = num;
        cycle_len = 0;
        dig_arr = {};
        rem_arr = {};
        while(true)
        {
            quo = (numer*10)/denom;
            rem = (numer*10)%denom;
            if(rem==0)
                break;
            numer = rem;
            bool break_while = false;
            for(int i=0;i<dig_arr.size();i++)
            {
                if(quo==dig_arr[i] && rem==rem_arr[i])
                {
                    cycle_len = dig_arr.size()-i;
                    break_while=true;
                    break;
                }
            }
            if(break_while)
                break;
            dig_arr.push_back(quo);
            rem_arr.push_back(rem);
        }
        if(cycle_len>max_len)
        {
            max_len = cycle_len;
            max_num = num;
        }
        std::cout<<num<<std::endl;
        for(int j=0;j<dig_arr.size();j++)
            std::cout<<dig_arr[j]<<" ";
        std::cout<<std::endl;
        for(int j=0;j<dig_arr.size();j++)
            std::cout<<rem_arr[j]<<" ";
        std::cout<<std::endl<<std::endl;
    }

    std::cout<<"Number below thousand with largest reccuring cycle when inverted is "<<max_num<<" with cycle of length "<<max_len;
    return(0);
}

/*
std::cout<<num<<std::endl;
        for(int j=0;j<dig_arr.size();j++)
            std::cout<<dig_arr[j]<<" ";
        std::cout<<std::endl;
        for(int j=0;j<dig_arr.size();j++)
            std::cout<<rem_arr[j]<<" ";
        std::cout<<std::endl<<std::endl;
*/