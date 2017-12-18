#include<iostream>
#include<string>
#include<stdint.h>
using namespace std;

int main()
{
	int64_t n =7L;
	string clue = "";
	int64_t overal_counter =0;
	for(int i=0; i<n;i++){
		for(int j=0; j<i;j++){
			//cout<<"hello!"<<endl;
			overal_counter++;
		}
		clue = clue.append(basic_string(overal_counter));
		clue= clue.append("+");
		cout<<"when i= "<<i<<", the j loop executes "<<counter<<"times"<<endl;	
	}
	
	return 0;
}
