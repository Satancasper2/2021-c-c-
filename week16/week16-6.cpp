#include<stdio.h>
#include<string.h>
char line[300]="110011010100111110110";
int main()
{
    int ans=0;
    int n=strlen(line);
    for(int i=0;i<n;i++)
    {
        if(line[i]=='1')
        ans++;
    }
    printf("¦³%d­Ó1\n",ans);
}
