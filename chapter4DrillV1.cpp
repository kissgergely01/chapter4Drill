#include "std_lib_facilities.h"

int main(){
	double szam;
	double szam2;
	
	
	while(cin >> szam >> szam2)
	{
		
            	
		if(szam>szam2){
			cout << "the larger value so far" << szam << endl;		
			cout << "the smaller value so far" << szam2 << endl;
		}
		if(szam2>szam){
			cout << "the larger value so far" << szam2 << endl;
			cout << "the smaller value so far" << szam << endl;
			}
		if(szam2==szam){
			cout << "The numbers are equal" << endl;}
		/*if() Nem tudtam értelmezni a feltételt
		cout << "The numbers are almost equal"  << endl;*/
		
		
	}
	
	return 0;
}
