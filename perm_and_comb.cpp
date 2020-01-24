#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(r==0)
	return 1;
	else
	return(n*permutation(n-1,r-1));
  
}

int combination(int n, int r)
{
	if(r==0)
	return 1;
	else 
  return (((n*1.0)*combination(n-1,r-1))/r);
}

int main()
{
	int n,r;
	cout<<"Enter value of n = ";
	cin>>n;
	cout<<"Enter value of r = ";
	cin>>r;
	
	if(r==0){
		cout<<"nPr and nCr = "<<1;
		exit (0);
}

	try{
	
 if(n<0||r<0){
		throw n;
	}
		}
		catch(int n){
		cout<<"Error-- can't get value, Please enter positive number ";
		exit(0);
	
	}
	cout<<permutation(n,r)<<endl;
	cout<<combination(n,r);

	  return 0;
}
