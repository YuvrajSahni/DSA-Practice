#include <iostream>
using namespace std;

void reverse(char str[], int low, int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reverse_words(char str[], int n)
{
    int start=0;;
    for(int end=0;end<n;end++)
    {
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<str[i];
    }
}

int main()
{
    char x[]={"Welcome to Gfg"};
    reverse_words(x,14);
    
    return 0;
}