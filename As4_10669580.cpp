#include<iostream>
using namespace std;
 int comnfac(int k,int  i)
{

  if(k==0)	
{
	return i;
  }  

	else	
	{
		
		return comnfac( k%i,  i);
		
	}
	
}
	





         int main()
         
        {
        	int a,b;
        	cout<<"Enter a number, A=";
        	cin>>a;
        	cout<<"Enter another number, B=";
            cin>>b;
        	cout<< "GCF"<< comnfac(a,b);
        	
        	
        	
        	
        	
		}
