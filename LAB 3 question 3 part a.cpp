#include<iostream>
#include<string>
#include<stdint.h>
using namespace std;

int main()
{
	int64_t n =1000000;
	int64_t counter =0;
	for(int i=0; i<n;i++){
		for(int j=0; j<n;j++){
			cout<<"hello!"<<endl;
			counter++;
		}
	}
	cout<<"when n= "<<n<<", hello! is printed "<<counter<<"times"<<endl;
	return 0;
}
