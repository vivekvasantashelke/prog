#include <iostream>

using namespace std;

class strrev
{
    string str;

public:
      void getstr()
    {
             getline(cin,str);
       }
    void revstr()
    {
           string::reverse_iterator it;
        for(it=str.rbegin();it!=str.rend();it++)
            cout<<*it;
    }
};


int main()
{
 strrev str;
 str.getstr();
 str.revstr();
    return 0;
}
