#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>
//#include<algorithm>
//#include<stack>
//#include<climits>
using namespace std;

#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

bool cmP(int a , int b){return a>b;}

void Sortt(int a[],int n, bool(&cmp)(int a ,int b)){

	for(int i =0;i<n-1;i++){   //here we are running loop till n-1 because we 
		for(int j =0;j<(n-i-1);j++){
			if(cmp(a[j],a[j+1]))swap(a[j],a[j+1]);
		}
	}  
}


int main(void){
  
  fre;sync;
  int a[100];
  int n;cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  Sortt(a,n,cmP);
  for(int i =0;i<n;i++)cout<<a[i]<< " ";
  return 0;
}


