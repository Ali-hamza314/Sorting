#include<iostream>
using namespace std;
void swap(int &x ,int &y );
int main()
{ 
	int a[]={77, 53, 4, 36, 2};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) {
		for(int n=i;n<sizeof(a)/sizeof(a[0]);n++) {
			if(a[n]<a[i]) {
				swap(a[n],a[i]);
				
			}
		}
	}
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) {
		cout<<a[i]<<" ";
	}
}
void swap(int &x,int &y){
	int c;
	c=x;
	x=y;
	y=c;
}