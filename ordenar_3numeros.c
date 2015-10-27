#include<stdio.h>
#include<iostream>
using namespace ::std; 
int a,b,c,d;
main(){
	cout<<"ingresa los tres numeros a ordenar\n";
	cin>>a;
	cin>>b;
	cin>>c;
	if (a<b){
		d=a;
		a=b;
		b=d;
	}
	if (a<c){
		d=a;
		a=c;
		c=d;
	}
	if (b<c){
		d=b;
		b=c;
		c=d;
	}
	cout<<"lo numeros ordenados son:\n";
	cout<<a ;
	cout<<b ;
	cout<<c ;
}
