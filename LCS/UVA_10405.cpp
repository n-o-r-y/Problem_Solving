#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[1001];
    char s2[1001];
    while (gets(s1) != NULL) {
        //scanf("%s %s", s1, s2);
        gets(s2);
        int l1 = strlen(s1);
        int l2 = strlen(s2);
        int lcs[l1 + 1][l2 + 1];
        for (int i = 0; i <= l1; i++)
        {
            for (int j = 0; j <= l2; j++)
            {
                lcs[i][j] = 0;//sob gula index er value 0
            }
        }
        for (int i = 1; i <= l1; i++)
        {
            for (int j = 1; j <= l2; j++)
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
        printf("%d\n", lcs[l1][l2]);
    }
    return 0;
}
