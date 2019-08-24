#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main()

{
int x,z;
double y;
cout<< "Iveskite studentu skaiciu ";
cin>>x;
cout<< "Iveskite namu darbu skaiciu ";
cin>>z;

string var[x];
string pav[x];
double ndv[x];
int nd[x];
int egz[x];
double gal[x];
for(int i=0;i<x; i++)
{
y=1 ;
cout<<"Iveskite " << i+1<< "-ojo studendo: varda, pavarde, egzamino rezultata"<< endl;
cin>>var[i] >> pav[i]>> egz[i];
for(int a=0;a<z; a++)
{
cout<<"Iveskite " << a+1<< "-ojo nd rezultata"<< endl;
cin>>nd[a];
y+=nd[a];

}
ndv[i]=y/z;
gal[i]=0.4*ndv[i]+0.6*egz[i] ;
}
cout<<"Vardas        Pavarde         Galutinis (Vid.)\n";
cout<<"----------------------------------------------\n";
for(int c=0;c<x; c++)
{

cout<<left<<setw(14)<<var[c];
cout<<left<<setw(15)<<pav[c];
cout<<right<<setw(17)<<fixed << setprecision(2) <<gal[c]<< endl;
}
}
