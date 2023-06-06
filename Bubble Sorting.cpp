#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main()
{
	int a[]={37, 17, 73, 20, 8, 34, 71, 58};
	int s;
	for(int i=0; i<sizeof(a)/sizeof(a[0]);i++) {
		for(int j=0;j<sizeof(a)/sizeof(a[0]); j++) {
			s=j-1;
			if(a[j]<a[s])
			{	swap(a[s], a[j]);	}
		}
	}
		for(int i=0; i<sizeof(a)/sizeof(a[0]);i++) {
		cout<<a[i]<<"\t";
	}

}
void swap(int &x, int &y) {
	int c;
	c=x;
	x=y;
	y=c;
}