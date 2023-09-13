#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a1, b1, x, y;
	double xA, yA, xB, yB, xC, yC, xD, yD;
	cin>>xA>>yA>>xB>>yB>>xC>>yC>>xD>>yD;
	double xAB, yAB, xCD, yCD;
	xAB=yA-yB;
	yAB=xB-xA;
	xCD=yC-yD;
	yCD=xD-xC;
	a1=(xCD/yCD-xAB/yAB);
	b1=(((yC*yCD)+(xC*xCD))/yCD)-(((yA*yAB)+(xA*xAB))/yAB);
	x=b1/a1;
	y=(yA*yAB+xA*xAB-xAB*x)/yAB;
	if(xAB==xCD){
		if((((yC*yCD)+(xC*xCD))/yCD)==(((yA*yAB)+(xA*xAB))/yAB)){
			cout<<"Many";
		}
		else if((((yC*yCD)+(xC*xCD))/yCD)!=(((yA*yAB)+(xA*xAB))/yAB)){
			cout<<"No";
		}
	}
	else{
		cout<<setprecision(2)<<x<<" "<<y;
	}
	return 0;
}
