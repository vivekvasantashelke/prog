#include <iostream>

using namespace std;

class palindrom
{
    string str;

public:
    int size,cnt=0,n,i;
    void getstr()
    {
         getline(cin,str);
        size=str.length();
    }
    void revstr()
    {
        for(i=0,n=size;i<size;i++,n--)
        {
            if(str[i]==str[n])
            {
                cnt++;
            }
        }

        if(cnt==0)
        {
            cout<<"String is palindrome"<<endl;
        }
        else
        {
    cout<<"STring is Not palindrome"<<endl;
        }
    }
};


int main()
{
 palindrom str;
 str.getstr();
 str.revstr();
    return 0;
}
