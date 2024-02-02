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









    return 0;
}
