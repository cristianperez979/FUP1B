#include <iostream> 
using namespace std; 
int main() 
{ 
     char texto[100]; 
     char texto2[100]; 
	 int i=0, j=0, veces=0; 
     cout << "Ingrese la primera palabra: "; 
     cin>>texto, 100; 
     cout << "Ingrese la segunda palabra: "; 
     cin>>texto2, 100;
	while(texto[i]) 
	{ 
		if(texto[i]==texto2[j])j++; 
		if(!texto2[j]) 
		{ 
			veces++; 
		} 
		i++; 
	} 
	if(veces==0)
		cout << "La segunda palabra no se encuentra en la primera palabra"; 
	else {
		cout << "La segunda palabra si se encuentra en la primera palabra"; 
	}
}
