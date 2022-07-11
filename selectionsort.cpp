#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void selection_sort(int [],int );
void print(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selection_sort(a,n);
	print(a,n);
}
void selection_sort(int a[],int n){
	int minIndex;
	for(int i=0;i<n-1;i++){
		minIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[minIndex]>a[j]) minIndex=j;
		}
		swap(a[minIndex],a[i]);
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}