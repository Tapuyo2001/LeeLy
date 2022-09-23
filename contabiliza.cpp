#include<iostream>
using namespace std;

int main()
{
	int LGTT_i=0,LGTT_l;
	float LGTT_x,LGTT_s=0;
	cout<<"ingrese el limite LGTT_l="; cin>>LGTT_l;
	do{
		
	cout<<"ingrese el numero LGTT_x="; cin>>LGTT_x;
	LGTT_i=LGTT_i+1;
	LGTT_s=LGTT_s+LGTT_x;



	}while(LGTT_i<LGTT_l);
	cout<<"Se ingresaron "<<LGTT_l<<" numeros "<< "que sumaron "<<LGTT_s<<endl;
	return 0;



}
