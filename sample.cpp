
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define fre freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long double ldb;
typedef long long lld;

int main(){
	
	fre;sync;
	int n,rot;
	cin>>n>>rot;
	int arr[n];
	int i=0;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int temp =arr[0];
	for(int  i=0;i<n;i++){
		
		cout<<arr[((rot%n)+i)%n]<<" ";

	}


	return 0;
}