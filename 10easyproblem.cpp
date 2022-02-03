//https://codeforces.com/problemset/problem/1030/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n;cin>>n;
  bool ans=true;
  for(int i=0;i<n;i++){
      int k;cin>>k;
      if(k==1){
          ans=false;
      }
  }
  if(ans)cout<<"EASY";
  else cout<<"HARD";
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
    problem();
    // while(t--){problem();cout<<"\n";}
     return 0;
}