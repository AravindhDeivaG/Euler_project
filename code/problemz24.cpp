#include<iostream>
#include<vector>

typedef std::vector<int> vInt;


// Function to reverse a given vector (Called by reference)
void reverse(vInt& num)
{
    int temp;
    for(int i=0;i<num.size()/2;i++)
    {
        temp = num[i];
        num[i]=num[num.size()-1-i];
        num[num.size()-1-i]=temp;
    }
}

// Function to find an elements position in a vector (returns -1 if the elment is not present)
int find(vInt num,int n)
{
    int ind=-1;
    for(int i=0;i<num.size();i++)
    {
        if(num[i]==n)
        {
            ind = i;
            break;
        }
    }
    return(ind);
}

// Function to print a given vector
void print(vInt& num)
{
    for(int i=0;i<num.size();i++)
        std::cout<<num[i]<<" , ";
    std::cout<<std::endl;
}


int main()
{
    vInt curr={0,1,2,3,4,5,6,7,8,9},prev={},temp;
    int count=1,ind,tem;

    while(count<=3628800)
    {
        temp={};
        ind=-1;
        prev=curr;
        temp.push_back(curr[curr.size()-1]);
        curr.pop_back();
        for(int i=prev.size()-1;i>0;i--)
        {
            if(curr[curr.size()-1]<temp[temp.size()-1])
            {
               tem = curr[curr.size()-1];
               while(ind<0)
               {
                tem++;
                ind = find(temp,tem);
               }
               temp[ind]=curr[curr.size()-1];
               curr[curr.size()-1]=tem;
               curr.insert(curr.end(),temp.begin(),temp.end());
               break;
            }
            else
            {
               temp.push_back(curr[curr.size()-1]);
               curr.pop_back(); 
            }
        }
        count++;
        //print(prev);
    }

    print(prev);

    return(0);
}
