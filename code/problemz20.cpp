#include<iostream>
#include<vector>
#include<math.h>

class number
{
    public:
    std::vector<int> digits={};

    // 1.1 Constructor to initialize the number as individual digits
    number(std::vector<int> dig={})
    {
        digits = dig;
    }

    // 1.2 Overloaded constructor to initialize "number class using int"
    number(int num)
    {
        while(num!=0)
        {
            digits.insert(digits.begin(),num%10);
            num = (int) num/10;
        }
    }

    // 2. Function to print the number from the vector 
    void print()
    {
        int size=digits.size();
        for(int i=0;i<size;i++)
            std::cout<<digits[i];
        std::cout<<std::endl;
    }

    // 3. Overloaded addition operator for the custom "number" class
    number operator + (number num)
    {
        number num_;
        int n=std::max(num.digits.size(),digits.size()),carry=0,sum=0;

        if(num.digits.size()>digits.size())
            digits.insert(digits.begin(),num.digits.size()-digits.size(),0);
        else if(digits.size()>num.digits.size())
            num.digits.insert(num.digits.begin(),digits.size()-num.digits.size(),0);

        for(int i=n-1;i>=0;i--)
        {
            sum = (digits[i]+num.digits[i]+carry)%10;
            carry =(int) (digits[i]+num.digits[i]+carry)/10;
            num_.digits.insert(num_.digits.begin(),sum);
        }
        if(carry!=0)
        num_.digits.insert(num_.digits.begin(),carry);
        return(num_);
    }

    // 4. Overloaded * operation to multiply "number" class and single digit integer
    number operator * (int n)
    {
        number num_;
        int temp=0,carry=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            temp = (digits[i]*n+carry)%10;
            carry = (int) (digits[i]*n+carry)/10;
            num_.digits.insert(num_.digits.begin(),temp);
        }
        if(carry!=0)
        num_.digits.insert(num_.digits.begin(),carry);
        return(num_);
    }

    // 5. Overloaded * operation to multiply two "number" class object
    number operator * (number num)
    {
        number temp,prod;
        for(int i=digits.size()-1;i>=0;i--)
        {
            temp=num*digits[i];
            temp.digits.insert(temp.digits.end(),digits.size()-1-i,0);
            prod = prod+temp;
        }
        return(prod);
    }

};


int main()
{
    // Find the sum of digits of 1000 factorial
    int n=100;
    number fact(1);
    for(int i=1;i<=n;i++)
    {
        number num(i);
        fact = fact*num;
        std::cout<<i<<" | ";
    }
    std::cout<<std::endl;

    int sum=0;
    for(int i=0;i<fact.digits.size();i++)
        sum+=fact.digits[i];
    std::cout<<"Sum of digits of "<<n<<" factorial = "<<sum<<std::endl;
    return(0);
}