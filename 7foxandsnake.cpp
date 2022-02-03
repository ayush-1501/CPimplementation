//https://codeforces.com/problemset/problem/510/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n,m;cin>>n>>m;
  bool flip=true;
  for(int i=1;i<=n;i++){
      if(i%2!=0){
          for(int j=1;j<=m;j++){cout<<"#";}
          cout<<"\n";continue;
      }
      if(flip){
          for(int j=1;j<=m-1;j++){cout<<".";}
          cout<<"#";
          flip=false;
          cout<<"\n";continue;
      }
      if(!flip){
          cout<<"#";
           for(int j=1;j<=m-1;j++){cout<<".";}
          flip=true;
          cout<<"\n";
      }
  }

}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     //int t;cin>>t;
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
    problem();
    // while(t--){problem();cout<<"\n";}
     return 0;
}