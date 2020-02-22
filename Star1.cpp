#include <iostream>
using namespace std ;

int main ()
{
	int n, k=0, j=0, i=0, l=0;
	
cout<<"enter a positive integer: ";
cin>>n;
cout<<"\n";

while(j<=2*n)
	{ 
	if (k>=0 && k<=n)
	{
		for(i=0;i<n-k;i++){cout<<"*"<<" ";}
		if(k!=n)cout<<"\n";
		k+=1;
		l++;
		//cout<<l<<endl; 
		}
		
	else if (l>=n && l<=2*n)
	{
		for(i=0;i<l-n;i++){cout<<"*"<<" ";}
		cout<<"\n";
		l++;
		//cout<<l<<endl;
		}
	j++;
	}
return 0;

}
