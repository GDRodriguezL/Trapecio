#include <iostream>

using namespace std;

int main()

{
	std::cout<<"AREA DE UN TRAPECIO \n\n";
	//variables
	float baseMy;
	float baseMn;
	float altura;
	float area;
	
	cout<<"\n Digite la base mayor del trapecio: \n";
	cin>>baseMy;
	
	cout<<"\n Digite la base menor del trapecio: \n";
	cin>>baseMn;
	
	cout<<"\n Digite la altura del trapecio: \n";
	cin>>altura;
	
	area=((baseMy+baseMn)/2)*altura;
	cout<<"\n El area del trapecio es: \n"<<area;
	
	cin.ignore();
	cin.get();
	
}
