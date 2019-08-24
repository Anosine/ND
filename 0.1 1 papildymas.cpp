#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()

{
int x,z;

cout<< "Iveskite studentu skaiciu "; cin>>x;
cout<< "Iveskite namu darbu skaiciu "; cin>>z;

string var[x], pav[x];
double ndv[x], ndm[x], gal[x], gal2[x], y, nd[x], egz[x], z1;

for(int i=0;i<x; i++)
{
y=0 ;
cout<<"Iveskite " << i+1<< "-ojo studendo: varda, pavarde, egzamino rezultata"<< endl;
cin>>var[i] >> pav[i]>> egz[i];
for(int a=0;a<z; a++)
{
cout<<"Iveskite " << a+1<< "-ojo nd rezultata"<< endl;
cin>>nd[a];
y+=nd[a];

}
sort(nd, nd+z);
if(z%2==0)
{
z1=((nd[(z - 1) / 2]) + nd[z / 2])/2;
ndm[i]=z1;
}
else
{
z1=nd[z/2];
ndm[i]=z1;
}
gal2[i]=0.4*ndm[i]+0.6*egz[i] ;
ndv[i]=y/z;
gal[i]=0.4*ndv[i]+0.6*egz[i] ;
}
cout<<"Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
cout<<"-----------------------------------------------------------------\n";
for(int c=0;c<x; c++)
{

cout<<left<<setw(14)<<var[c];
cout<<left<<setw(15)<<pav[c];
cout<<right<<setw(17)<<fixed << setprecision(2) <<gal[c];
cout<<right<<setw(19)<<fixed << setprecision(2) <<gal2[c]<< endl;
}
}
