#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter your name: ";
    getline(cin,str);
    cout<<"Your name is: "<<str<<endl;
    
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }

    return 0;
}