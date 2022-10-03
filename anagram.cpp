#include <iostream>

using namespace std;
class Anagram
{
    string str,str1;
public:
    int size,cnt=0;
    void getstr()
    {
     cout<<"Enter String Frist"<<endl;
        getline(cin,str);
        size=str.length();
        cout<<"Enter string second"<<endl;
        getline(cin,str1);
    }
    void check_anagram()
    {
       string::iterator it;
        string::reverse_iterator it2;
           for(it=str.begin();it!=str.end();it++)
           {
                 for(it2=str1.rbegin();it2!=str1.rend();it2++)
                   {
                     if(*it==*it2)
                     {
                         cnt++;
                     }

                     }
             }
           if(size==cnt)
           {
               cout<<"Annagram string"<<endl;
           }
           else
           {
               cout<<"Not Anagram string"<<endl;
           }
    }
};

int main()
{
    Anagram str;
    str.getstr();
    str.check_anagram();

    return 0;
}
