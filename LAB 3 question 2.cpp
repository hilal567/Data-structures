#include<iostream>
#include<string>
#include<stdint.h>
using namespace std;

int main()
{
	int64_t n =32;
	int counter = 0;
	while(n>1)
	{
	n=n/2;
	counter++;
	}
	cout<<"counter is "<<counter;
	return 0;
}
