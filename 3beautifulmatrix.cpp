#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int k;int row,col;
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          cin>>k;
          if(k==1){
              row=i;col=j;
          }
      }
  }
   cout<<abs(row-2)+abs(col-2);
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int t;cin>>t;
      #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
      #endif
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
    // while(t--){problem();cout<<"\n";}
    problem();
     return 0;
}