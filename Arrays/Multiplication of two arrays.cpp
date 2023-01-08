#include <iostream>
using namespace std;

int main()
{
    
    int n,m,p,o;
    do{
        cin>>n>>m>>o>>p;
    }
    while(m!=o);
    int a[n][m]={};
    int b[o][p]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
     for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            int s=0;
            for(int k=0;k<m;k++){
                s+=a[i][k]*b[k][j];
            }
          cout<<s<<" ";
        }
    }
    return 0;
}
