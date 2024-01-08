// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// const int R=3;
// const int C=5;

// void median(int arr[][INT32_MAX])
// {
//     int min=arr[0][0];
//     int max=arr[0][C-1];
//     for(int i=1;i<R;i++)
//     {
//         if(arr[i][0])<min)
//         {
//             min=arr[i][0];
//         }
//         if(arr[i][C-1]>max)
//         {
//             max=arr[i][C-1];
//         }
//     }
//     int med_pos=(R*C+1)/2;
//     while(min<max)
//     {
//         int mid = (min+max)/2;
//         int mid_pos=0;
//         for(int i=0;i<R;i++)
//         {
//             mid_pos+=upper_bound(arr[i],arr[i]+C,mid) - m[i];
//         }
//         if(mid_pos<med_pos)
//         {
//            min=mid+1;
//        }
//         else
//         {
//         max=mid
//         }
//         return min;
//     }

// }

// int main()
// {
//     cout<<"HELLO";
//     return 0;
// }
