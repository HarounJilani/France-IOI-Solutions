#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nbj,nbclients,ind,d,nbl;
    vector<int>res;
    cin>>nbl>>nbj;

    int T[nbl]={0};

    for(int i=0;i<nbj;i++){
        cin>>nbclients;
        for(int j=0;j<nbclients;j++){
            cin>>ind>>d;
            if(T[ind]==0){
                T[ind]=i+d;
                res.push_back(1);
                }
            else if(T[ind]!=0 && i>=T[ind])
                {res.push_back(1);
                T[ind]=d+i;
                }
            else if(T[ind]!=0 && i<T[ind])
                res.push_back(0);

        }
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<endl;
}
