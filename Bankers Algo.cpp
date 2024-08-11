#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main()
{
    lli n,i;
    string str;
    cout<<"Enter the number: ";
    cin>>str;
    cout<<"Enter significant digits: ";
    cin>>n;
    lli f=0,left=0;
    for(i=0; str[i]!='.'; i++)
    {
        if(str[i]>='1' && str[i]<='9')
        {
            f=1;
            left++;
        }
        else if(str[i]=='0' && f==1)
        {
            left++;
        }

    }
   
    int r = n - left, right=0;
    for(int j=i+1; j<str.size()-1; j++)
    {
        if(str[j]=='0' && right==0 && left==0)
        {
            continue;
        }
        else
        {
            r--;
            right=1;
            if(r==0)
            {
                int x=str[j]-'0';
                int y=str[j+1]-'0';
                if(y>5)
                {
                    x+=1;
                    str[j]=x+'0';
                    str.erase(j+1);
                }
                else if(y==5 && x%2==1)
                {
                    x+=1;
                    str[j]=x+'0';
                    str.erase(j+1);
                }
                else
                {
                    str.erase(j+1);

                }
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
