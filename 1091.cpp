#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
   int k,n,m;
   string ans;
   while(scanf("%d",&k), k){
      int x,y;
      scanf("%d %d",&n,&m);
      for(int i = 0;i < k;i ++){
         scanf("%d %d",&x,&y);
         if(x < n && y < m) ans = "SO";
         else if(x < n && y > m) ans = "NO";
         else if(x > n && y > m) ans = "NE";
         else if(x > n && y < m) ans = "SE";
         else if(x == n || y == m) ans = "divisa";
         cout << ans << endl;
      }
   }
   return 0;
}