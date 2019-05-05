#include<stdio.h>
int main()
{
	//Initialize x 
	int x=5;
	// print the address of x variable
	printf("%d",&x);
	// Declare a pointer p
	int *p;
	// Initialize address of x in pointer p 
	p=&x;

	// print value of p that is address of x
	printf("\n%d",p);

	// print a value that is value of &x that is the address of value of 5 
	// here p contain address of x when we use * that is mean that it will print a value that store on this address so  it will print 5
	printf("\n%d",*p);


	//print the address of p pointer
	printf("\n%d",&p);
	int q=&p;
	printf("\n%d",q);
	printf("\n%d",&q);


	return 0;
}
