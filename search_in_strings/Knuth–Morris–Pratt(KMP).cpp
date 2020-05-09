#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string string1, substring;
    vector<int> solutions;
    cin>>string1;
    cin>>substring;
    int sl=string1.length(),ssl=substring.length();
    int pi[ssl];
    pi[0]=0;
    int j=0,i=1;
    while (i<ssl)
    {
        if (substring[i] == substring[j])
        {
            pi[i]=j+1;
            j++;
            i++;
        }
        else
        {
            if (j==0)
            {
                pi[i]=0;
                i++;
            }
            else
                j=pi[j-1];
        }
    }
    
    i=0;j=0;
    while (i<sl)
    {
        if (string1[i]==substring[j])
        {
            i++;
            j++;
            if (j==ssl)
                solutions.push_back(i-ssl);
                
        }
        else
        {
            if (j==0)
            {
                i++;
                if (i==sl)
                    break;
            }
            else
                j=pi[j-1];
        }
    }
    for (int i=0;i<solutions.size();i++)
        cout<<solutions[i]<<" ";
    return 0;
}
