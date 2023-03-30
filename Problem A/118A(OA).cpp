#include <string>
#include <iostream>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i,j;
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
