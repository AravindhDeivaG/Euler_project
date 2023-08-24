#include<iostream>
#include<vector>
#include<math.h>

bool is_palindrome(float x)
{
    int num_dig;
    std::vector<int> digits;

    num_dig=log10(x)+1;

    for(int i=1;i<num_dig;i++)
    {
        digits.push_back(x-((int) x/10)*10);
        x = (int) x/10;
    }
    digits.push_back(x);

    for(int i=0;i<=ceil(num_dig/2);i++)
    {
        if(digits[i]!=digits[num_dig-i-1])
        {
            return(false);
        }
    }
    return true;
}

int main()
{
    int max=0,num1,num2;
    for(int i=999;i>=101;i--)
    {
        for(int j=999;j>=101;j--)
        {
            if(!((i%2==0 & j%5==0) | (i%5==0 & j%2==0)))
            {
                if(is_palindrome(i*j))
                {
                    if(i*j>max)
                    {
                        max = i*j;
                        num1=i;
                        num2=j;
                    }
                }
            }
        }
    }
    std::cout<<"Maximum palindrome from product of two 3 digit numbers : "<<max<<" = "<<num1<<" * "<<num2;
    return(0);
}