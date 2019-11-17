#include<iostream>
#include<cstring>
using namespace std;
char n[21],p[21],np[42];
int main()
{
    int i;
    cin>>n>>p;
    for(i=0; i<strlen(p);i++)
    {
        if(strchr("aeiou",p[i])==0)
        {
            strncat(np,p+1,1);
        }
    }
    strcat(np," ");
    strcat(np,n);
    cout<<np;
    return 0;
}

