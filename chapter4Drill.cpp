#include "std_lib_facilities.h"

int main(){
	double szam;
	double szamMeterben;
	double legnagyobb=0;
	double legkisebb=0;
	string unit="";
	bool ValosBemenet = true;
	double sum;
	vector<double> szamok;
	bool elso=true;
	while(cin >> szam >> unit)
	{
		if (unit=="cm")
            	szamMeterben = szam/100;
        	else if (unit=="m")
        	szamMeterben = szam;
        	else if (unit=="in")
          	szamMeterben = szam*0.0254;
        	else if (unit=="ft")
            	szamMeterben = szam*0.0254*12;
            	else
            	ValosBemenet = false;
            	if(ValosBemenet){
		if(szamMeterben>legnagyobb || elso){
			legnagyobb=szamMeterben;
			cout << szamMeterben << "the largest number so far" << endl;		
		}
		if(szamMeterben<legkisebb || elso){
			legkisebb=szamMeterben;
			cout << szamMeterben << "the smallest number so far" << endl;}
		szamok.push_back(szamMeterben);
		sum+= szamMeterben;
		elso = false;
		}
		else
		cout << "not valid unit" << endl;
		ValosBemenet = true;
		
	}
	cout << "The largest number: " << legnagyobb << endl;
	cout << "The smallest number: " << legkisebb << endl;
	cout << "The number of numbers: " << szamok.size() << endl;
	cout << "The sum of numbers: " << sum << endl;
	sort(szamok);
	for(double s : szamok)
		cout << s << "\n";
	return 0;
}
