#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  cout<<min(min(k*l/nl,p/np),c*d)/n;
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
     //while(t--){problem();cout<<"\n";}
     return 0;
}