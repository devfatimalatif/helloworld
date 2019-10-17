#include <iostream>
using namespace std;
void swap(int *a,int *b)//function to swap the value of two integers
   {
	 int c;
	  c= *a;
	 *a=*b;
	  *b=c;
   }
   int main()
   {
   	int p;
   	int q;
   	cout<< "enter value of 1st integer ";
   	cin>> p;
  	cout<< endl;
  	cout<< "enter value of 2nd integer ";
  	cin>> q;
   	cout<< endl;
   	cout<< "Values of integers before swapping "<< endl;
   	cout<< "value of 1st integer ";
	cout<< p;
   	cout<< endl;
   	cout<< "value of 2nd integer ";
	cout<< q;
   	cout<< endl;
   	cout<< "Values of integers after swapping "<< endl;
   	swap(&p,&q);//calling the swap function
   	cout<< "value of 1st integer ";
	cout<< p;
   	cout<< endl;
   	cout<< "value of 2nd integer ";
	cout<< q;
   	cout<< endl;
   	return 0;
   }
