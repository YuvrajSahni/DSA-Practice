#include <iostream>
#include <math.h>

using namespace std;

void powerset(string str)
{
    int n = str.length();
    int powsize=pow(2,n); 
    for(int count=0; count<powsize; count++)
    {
        for(int j=0; j<n; j++)
        {
            if((count & (1<<j)) !=0)
            {
                cout<<str[j];
            }
        }
        cout<<"\n";
    }
}

int main()
{
    string s;
    cin>>s;
    powerset(s);

    return 0;
}