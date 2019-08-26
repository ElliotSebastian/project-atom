#include <bits/stdc++.h>
using namespace std;

int scheck(char f)
{
    if(f=='H')
    {
        return 1;
    }
    if(f=='C')
    {
        return 12;
    }
    if(f=='N')
    {
        return 14;
    }
    if(f=='O')
    {
        return 16;
    }
    if(f=='P')
    {
        return 31;
    }
    if(f=='S')
    {
        return 32;
    }
    if(f=='K')
    {
        return 39;
    }
    if(f=='I')
    {
        return 127;
    }
}
int dcheck(char f,char b)
{
	if(f=='H'&&b=='e')
    {
        return 4;
    }
    if(f=='N'&&b=='e')
    {
        return 20;
    }
    if(f=='N'&&b=='a')
    {
        return 23;
    }
    if(f=='M'&&b=='g')
    {
        return 24;
    }
    if(f=='A'&&b=='l')
    {
        return 27;
    }
    if(f=='S'&&b=='i')
    {
        return 28;
    }
    if(f=='C'&&b=='l')
    {
        return 35.5;
    }
    if(f=='A'&&b=='r')
    {
        return 40;
    }
    if(f=='C'&&b=='a')
    {
        return 40;
    }
    if(f=='M'&&b=='n')
    {
        return 55;
    }
    if(f=='F'&&b=='e')
    {
        return 56;
    }
    if(f=='C'&&b=='u')
    {
        return 64.5;
    }
    if(f=='Z'&&b=='n')
    {
        return 65;
    }
    if(f=='A'&&b=='g')
    {
        return 108;
    }
    if(f=='B'&&b=='a')
    {
        return 137;
    }
    if(f=='P'&&b=='t')
    {
        return 195;
    }
    if(f=='A'&&b=='u')
    {
        return 197;
    }
    if(f=='H'&&b=='g')
    {
        return 201;
    }
}

int separate(char a[10000])
{
	int times=1,total=0;
    int i=0;
    int ti=1;
    string search;
    if(a[0]<='9'&&a[0]>='0')
    {
        times=a[0]-'0';
        i=1;
    }
    for(int j=i;j<strlen(a);j++)
    {
        if(isalpha(a[j])!=0)
        {
            if(islower(a[j+1])!=0)
            {
                total=total+dcheck(a[j],a[j+1]);
                j++;
            }
            else
            {
            	total=total+scheck(a[j]);
			}
        }
        else
        {
        	if(islower(a[j-1])!=0)
            {
                total=total+(a[j]-'0')*dcheck(a[j-2],a[j-1])-dcheck(a[j-2],a[j-1]);
            }
            else
            {
            	total=total+(a[j]-'0')*scheck(a[j-1])-scheck(a[j-1]);
			}
		}
    }
    return times*total;
} 

int main()
{
    char a[10000];
    cin>>a;
    cout<<separate(a);
    return 0;
}
