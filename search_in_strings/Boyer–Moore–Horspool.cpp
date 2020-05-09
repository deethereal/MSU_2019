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
    int  i,j;
//    cout<<sl<<endl;;a
    int  shift[26]; //только строчные латинские буквы
    for (i = 0; i < 26; i ++)
        shift[i] = ssl;
  /*  for (int i=0; i<26; i++)
        cout<<shift[i]<<" ";
    cout<<endl;
    //cout<<(int)(substring[2]); */
    for (i=ssl-2;i>=0;i--)
    {
        if (shift[((int)(substring[i]))-97] == ssl)
            shift[((int)(substring[i]))-97]=ssl-i-1;
    }
 /* for (int i=0; i<26; i++)
        cout<<shift[i]<<" ";
    cout<<endl;n */
    
    i = ssl - 1;
    while (i<sl) {
        j=ssl-1;
        if (substring[j]==string1[i])
        {
            bool flag= true;
            for (int f=ssl-2;f>=0;f--)
                if (string1[i-ssl+1+f]!=substring[f])
                {
                    flag=false;
                    break;
                }
            if (flag)
                solutions.push_back(i-ssl+1);
            i+=shift[((int)(substring[ssl-1]))-97];
                
        }
        else
            i+=shift[((int)(string1[i]))-97];
    }
    for (int i=0;i<solutions.size();i++)
        cout<<solutions[i]<<" ";
//     */
    return 0;
}
