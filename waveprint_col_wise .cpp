
#include<iostream>
//#include<bits/stdc++.h>
//#include<cstring>         // string 
//#include<algorithm>       // sort ,
//#include<stack>           //stack,
//#include<climits>         // INT_MAX ,INT_MIN,
//#include<vector>
using namespace std;
#define int long long int
#define go f()
#define pb push_back
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl '\n'

void f(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 #ifndef ONLINE_JUDGE
  		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	 #endif
}
/*----------------------------------------------------------------------*/


int32_t main(){
	
	go;
	int row ,col ;
	cin>>row>>col;
	int a[row][col];
	for(int i =0;i<row;i++)
		for(int j =0;j<col;j++)
			cin>>a[i][j];


	for(int i =0;i<col;i++){

		if(i%2==0){
			for(int j=0;j<row;j++)cout<<a[j][i]<<" ";
		}else{
			for(int j =row-1;j>=0;j--)cout<<a[j][i]<<" ";
		}


	}


	return 0;
}