#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n = 3;
	int myArray[n] ={17,4,5};
	int total = 0;
	int counter = 0;
	for(int i = 0; i<n; i++)
	{
	total= total +myArray[i];
	counter++;
	}
	cout<<"total is: "<<total<<endl;
	cout<<"counter is: "<<total<<endl;
}
