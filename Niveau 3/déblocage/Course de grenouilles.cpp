#include <bits/stdc++.h>
using namespace std;

struct score{
    int num;
    int occ;
    score(int n,int o){
        num=n;
        occ=o;
    }
};
bool compare(score a,score b){
    if(a.occ==b.occ)
        return a.num<b.num;
    else
        return a.occ>b.occ;

}

int main()
{
  int tour,nbg;
  int num,d;
  cin>>nbg>>tour;
  int T[nbg]={0};
  vector<score> S;
  int M[tour][nbg];

  for(int i=0;i<tour;i++){
    for(int j=0;j<nbg;j++){
        M[i][j]=0;
    }
  }

    for(int i=1;i<=tour;i++){
            cin>>num>>d;
            M[i][num-1]=d;
        }
        for(int i=0;i<nbg;i++){
            M[tour][i]=0;
        }

    //generation du score sur toutes les tours
    for(int j=0;j<nbg;j++){
        for(int i=1;i<tour;i++){
           if(M[i][j]==0)
               M[i][j]=M[i-1][j];
           else
                M[i][j]+=M[i-1][j];
        }
    }
    int maxi=0;
    int ind;
    for(int i=1;i<tour;i++){
        maxi=0;
        for(int j=0;j<nbg;j++){
                if(M[i][j]>maxi){
                    maxi=M[i][j];
                    ind=j;
                }
                else if(maxi==M[i][j])
                        maxi=0;
        }

        if(maxi>0)
            T[ind]++;
    }


    for(int i=0;i<nbg;i++)
        S.push_back(score(i+1,T[i]));


    sort(S.begin(),S.end(),compare);
    cout<<S[0].num<<endl;


}
