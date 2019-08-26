#include <bits/stdc++.h>
using namespace std;

int times=1,total=0;

int check(string f)
{
    if(f[0]=='H')
    {
        return 1;
    }
    if(f[0]=='C')
    {
        return 12;
    }
    if(f[0]=='N')
    {
        return 14;
    }
    if(f[0]=='O')
    {
        return 16;
    }
    if(f[0]=='P')
    {
        return 31;
    }
    if(f[0]=='S')
    {
        return 32;
    }
    if(f[0]=='K')
    {
        return 39;
    }
    if(f[0]=='I')
    {
        return 127;
    }
    if(f[0]=='H'&&f[1]=='e')
    {
        return 4;
    }
    if(f[0]=='N'&&f[1]=='e')
    {
        return 20;
    }
    if(f[0]=='N'&&f[1]=='a')
    {
        return 23;
    }
    if(f[0]=='M'&&f[1]=='g')
    {
        return 24;
    }
    if(f[0]=='A'&&f[1]=='l')
    {
        return 27;
    }
    if(f[0]=='S'&&f[1]=='i')
    {
        return 28;
    }
    if(f[0]=='C'&&f[1]=='l')
    {
        return 35.5;
    }
    if(f[0]=='A'&&f[1]=='r')
    {
        return 40;
    }
    if(f[0]=='C'&&f[1]=='a')
    {
        return 40;
    }
    if(f[0]=='M'&&f[1]=='n')
    {
        return 55;
    }
    if(f[0]=='F'&&f[1]=='e')
    {
        return 56;
    }
    if(f[0]=='C'&&f[1]=='u')
    {
        return 64.5;
    }
    if(f[0]=='Z'&&f[1]=='n')
    {
        return 65;
    }
    if(f[0]=='A'&&f[1]=='g')
    {
        return 108;
    }
    if(f[0]=='B'&&f[1]=='a')
    {
        return 137;
    }
    if(f[0]=='P'&&f[1]=='t')
    {
        return 195;
    }
    if(f[0]=='A'&&f[1]=='u')
    {
        return 197;
    }
    if(f[0]=='H'&&f[1]=='g')
    {
        return 201;
    }

}

void separate(string a)
{
    int i=0;
    int ti=1;
    string search;
    if(a[0]<='9'&&a[0]>='0')
    {
        times=a[0]-'0';
        i=1;
    }
    for(int j=i;j<a.size();j++)
    {
        if(isalpha(a[j])==0)
        {
            search[0]=a[j];
            if(islower(a[j+1])==0)
            {
                search[1]==a[j+1];
            }
        }
        else
        {
            ti=a[j]-'0';
            j++;
        }
        total=total+ti*check(search);
        search.erase(1,2);
        ti=1;
    }
}

int main()
{
    string a;
    cin>>a;
    cout<<times*total;
    return 0;
}
