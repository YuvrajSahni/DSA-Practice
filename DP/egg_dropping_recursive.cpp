#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int res(int f, int e){
    if(f==0 || f==1){
        return f;
    }
    if(e==1){
        return f;
    }

    int mini = INT_MAX;
    int x, ans;

    for(x=1;x<=f;x++){
        ans=max(res(x-1,e-1),res(f-x,e));
        if(ans<mini){
            mini=ans;
        }
    }
    return mini+1;
}

int main()
{
    int f, e;
    cout << "Enter the number of floors: ";
    cin >> f;
    cout << "Enter the number of eggs: ";
    cin >> e;
    cout << "Minimum number of moves required: " << res(f, e) << endl;
    return 0;
}