#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s %s", s1, s2);
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

    int c1=0,c2=0;
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
    printf("\t\t\t\tTable\n");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            printf("%d\t", lcs[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------------------------------------\n");
    printf("Length of the sequence: %d\n",lcs[l1][l2]);
    

    //sequence

    int length=lcs[l1][l2];
    char sq[length+1];
    sq[length]='\0';
    int i=l1,j=l2;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
           sq[length-1]=s1[i-1];
           i--;
           j--;
           length--;
        }
        else if(lcs[i-1][j]>lcs[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("Sequence: ");
    cout<<sq;

    return 0;
}
