#include<iostream>
#include<vector>

class number
{
    public:
    std::vector<int> digits;
    number(std::vector<int> dig={})
    {
        digits = dig;
    }

    void print()
    {
        int n=digits.size();
        for(int i=0;i<n;i++)
        std::cout<<digits[i];
        std::cout<<std::endl;
    }

    void multiply_by_2()
    {
        number num;
        int n=digits.size();
        int carry=0,temp;
        for(int i=n-1;i>=0;i--)
        {
            temp =(int) digits[i]*2/10;
            digits[i] = digits[i]*2%10+carry;
            carry=temp;
        }
        if(carry!=0)
        {
            digits.insert(digits.begin(),carry);
        }
    }
};

int main()
{
    number num({1});
    for(int i=0;i<1000;i++)
    num.multiply_by_2();
    num.print();

    std::cout<<std::endl;
    int sum=0;
    for(int i=0;i<num.digits.size();i++)
        sum+=num.digits[i];
    std::cout<<"Sum of digits of 2^1000 = "<<sum;
    return(0);
}