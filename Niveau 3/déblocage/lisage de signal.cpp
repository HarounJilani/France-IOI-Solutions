#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nb=0;
    bool ok=false;
    int nbm;
    float diffmax;
    cin>>nbm;
    cin>>diffmax;
    float t[nbm];
    float res[nbm];
    for(int i=0;i<nbm;i++){
        cin>>t[i];
    }
    for(int i=0;i<nbm-1;i++){
            if(abs(t[i]-t[i+1])>diffmax)
            {
                ok=false;
                break;
            }
                ok=true;
    }
    if(ok){
        cout<<"0";
        return 0;
    }

    while(!ok){
        int i=1;
        for(int j=0;j<nbm;j++){
            if(j==0)
                res[j]=t[0];
            else if(j==nbm-1){
                res[j]=t[nbm-1];
            }
            else{
                res[j]=(t[i-1]+t[i+1])/2;
                i++;
            }

        }
        for(int i=0;i<nbm;i++){
            t[i]=res[i];
        }
        for(int i=0;i<nbm-1;i++){
            if(abs(res[i]-res[i+1])>diffmax){
                ok=false;
                break;
            }
            else
                ok=true;
        }
        nb++;
        if(nb==5000){
            nb=0;
            break;
        }
    }
    cout<<nb;
}

