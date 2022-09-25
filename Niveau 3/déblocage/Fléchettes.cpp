#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nbl;
    cin>>nbl;

    int N=2*nbl-1;
    char M[nbl][N];

    //adding 'a' to matrix
    for(int i=0;i<nbl;i++){
        for(int j=0;j<N;j++){
            M[i][j]='a';
        }
    }


    //character generation
    for(int i=1;i<nbl;i++){
        for(int j=i;j<N-i;j++){
             M[i][j]=(char)'a'+i;
        }
    }

    if(nbl>2){
    int m;
    for(int i=2;i<nbl;i++){
        int k=1;
        for(int j=1,m=N-2;j<i,m>=(N-i);m--,j++){
             M[i][j]=(char)'a'+k;
             M[i][m]=(char)'a'+k;
             k++;
            }
        }
    }


    //display of matrix
    for(int i=0;i<nbl;i++){
        for(int j=0;j<N;j++){
             cout<<M[i][j];
        }
        cout<<endl;
    }

    //display of the rest of the matrix
     for(int i=nbl-2;i>=0;i--){
            string ch="";
            for(int j=0;j<N;j++){
                ch=ch+M[i][j];
            }
            cout<<ch<<endl;

        }

}
