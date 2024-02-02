// lcs -longest common sequence

#include<bits/stdc++.h>
using namespace std;
int main(){
   
   int i,j,m,n,to_cost=0;
   string x,y;
   m=x.size();
   n=y.size();
   int c[m+1][n+1];
   char b[m+1][n+1];

   for(i=0;i<=m;i++){
    c[i][0]=0;
   }

   for(j=0;j<=n;j++){
    c[0][j]=0;
   }

   for(i=0;i<=m;i++){
    b[i][0]='0';
   }
   for(j=0;j<=n;j++){
    b[0][j]='0';
   }

 //   main task
 for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
        if(x[i-1]==y[j-1]){
            c[i][j]=c[i-1][j-1]+1;
            b[i][j]='D';
        }
        else if(c[i-1][j]>=c[i][j-1]){
            c[i][j]=c[i-1][j];
            b[i][j]='U';
        }
        else{
            c[i][j]=c[i][j-1];
            b[i][j]='L';
        }
    }
 }







    return 0;
}
