#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t_umi;
    cin >> t_umi;
    while (t_umi--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int finans = INT_MAX;

        for (int i = 0; i < 26; i++) // running a loop for each character in the alphabet
        {
            char x = 'a';
            x += i;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == x)
                {
                    cnt++;
                }
            } // counting the number of occurences of a alphabet

            if (cnt == 0) // if no element is present
            {
                continue;
            }

            int l = 0;
            int r = cnt - 1;
            int cntextra = 0;

            for (int i = 0; i <= r; i++) // the number of occurences present in length of the number of occurences
            {
                if (s[i] != x)
                {
                    cntextra++;
                }
            }

            int ans = cntextra; // initialising the value to be returned as the number of characters present
                                // in the range of number of occurences of the said character

            while (r <= n - 1)
            {
                ans = min(ans, cntextra);
                if (s[l] != x) // if the current character is not the chosen one
                {
                    cntextra--;
                }

                l++;
                r++;

                if (r <= n - 1 && s[r] != x)
                {
                    cntextra++;
                }
            }
            finans = min(ans, finans);
        }
        cout << finans << endl;
    }
}