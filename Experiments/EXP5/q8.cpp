//WAP to generate all combinations of 1, 2 & 3 using for loop.
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=3;k++)
            {
                cout<<i<<j<<k<<" ";
            }
        }
    }
}