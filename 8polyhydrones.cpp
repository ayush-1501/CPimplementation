//https://codeforces.com/problemset/problem/785/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces.
void problem(void){
    map<string,int>mp{{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    int n;cin>>n;
    vector<string>in;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        in.push_back(s);
    }
     int count=0;
    for(auto x:in){
      count+=mp[x];
    }
    cout<<count;
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