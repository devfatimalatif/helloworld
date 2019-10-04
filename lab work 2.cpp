#include <iostream>
using namespace std;
void swap(int *a,int *b)
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
   	cout<< "enter value of ist integer ";
   	cin>> p;
  	cout<< endl;
  	cout<< "enter value of 2nd integer ";
  	cin>> q;
   	cout<< endl;
   	cout<< "Values of integers before swapping "<< endl;
   	cout<< "value of ist integer ";
	cout<< p;
   	cout<< endl;
   	cout<< "value of 2nd integer ";
	cout<< q;
   	cout<< endl;
   	cout<< "Values of integers after swapping "<< endl;
   	swap(&p,&q);
   	cout<< "value of ist integer ";
	cout<< p;
   	cout<< endl;
   	cout<< "value of 2nd integer ";
	cout<< q;
   	cout<< endl;
   	return 0;
   }
