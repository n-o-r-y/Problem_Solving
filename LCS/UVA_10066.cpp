#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,c=1;
    while (scanf("%d %d", &n, &m) != EOF) {
        //scanf("%s %s", s1, s2);
        int s1[n];
        int s2[m];
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {

            for(int i=0;i<n;i++)
            {
              scanf("%d",&s1[i]);
            }
            for(int i=0;i<m;i++)
            {
              scanf("%d",&s2[i]);
            }
            int lcs[n + 1][m + 1];
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= m; j++)
                {
                    lcs[i][j] = 0;//sob gula index er value 0
                }
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (s1[i - 1] == s2[j - 1]) //jodi value same hoy
                    {

                        lcs[i][j] = lcs[i - 1][j - 1] + 1; //diagonal er sathe +1

                    }
                    else
                    {
                        lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]); //same na hoile upor er ta r paser ta check boro konta
                    }
                }
            }
            printf("Twin Towers #%d\n",c);
            printf("Number of Tiles : %d\n", lcs[n][m]);
            c++;
        }
    }
    return 0;
}
