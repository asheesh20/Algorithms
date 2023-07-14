#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void insertion_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		for(;j>=0;j--){
			if(a[j]>temp) a[j+1]=a[j];
			else break;
		}
		a[j+1]=temp;
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertion_sort(a,n);
	print(a,n);
}