#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void bubblesort(int [],int );
void print(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
	print(a,n);
}
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}