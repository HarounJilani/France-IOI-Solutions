#include <bits/stdc++.h>+

using namespace std;

int main()
{
    string ch;
    cin>>ch;
    int i=0;
    while(i<ch.length()){
        if(ch[i]==ch[i+1]){
            ch.erase(i,2);
            i--;
            }
        else
            i++;

         if(i==-1)
            i++;

    }
    cout<<ch;



}





