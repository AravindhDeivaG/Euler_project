#include<iostream>

int main()
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int date,day,month,year,count=0;

    for(year=1900;year<2001;year++)
    {
        if( (year%4==0 & year%100!=0) | year%400==0 )
            days[1]=29;
        for(month=1;month<=12;month++)
        {
            for(date=1;date<=days[month-1];date++)
            {
                if(day>7)
                    day-=7;
                if(day==7 and date==1)
                    count++;
                day++;
            }
        }
    }
    std::cout<<date<<" | "<<month<<" | "<<year<<std::endl;
    std::cout<<count;
    return(0);
}