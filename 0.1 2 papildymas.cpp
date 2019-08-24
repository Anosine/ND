#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()

{
int x,z ;

cout<< "Iveskite studentu skaiciu "; cin>>x;
vector <double> nd;

string var[x], pav[x];
double ndv[x], ndm[x], gal[x], gal2[x], y=0, egz[x], z1,z2,test, c;
for(int i=0;i<x; i++)
{
y=0 ;
cout<<"Iveskite " << i+1<< "-ojo studendo: varda, pavarde, egzamino rezultata"<< endl;
cout<<"Pvz.: Edmundas Kasauskas 7"<< endl;
cin>>var[i] >> pav[i]>> egz[i];

cout<<"Iveskite " << i+1<< "-ojo studendo: namu darbu rezltatus\n"<<"Pvz.: 5 5 8 2 x"<< "(Ivesdami x sustabdysite ivedima)\n"<< endl;
int l=0;


char ch;
do
{
   while(cin >> c)
nd.push_back(c);
   cin.clear();
   cin >> ch;

} while(ch != 'x');
sort(nd.begin(), nd.end());
l=nd.size();
for(int p=0; p<l;p++)
{
y+=nd[p];
}
if(l%2==0)
{
z2=((nd[(l - 1) / 2]) + nd[l / 2])/2;
ndm[i]=z2;
}
else
{
z1=nd[l/2];
ndm[i]=z1;
}
gal2[i]=0.4*ndm[i]+0.6*egz[i] ;
ndv[i]=y/l;
gal[i]=0.4*ndv[i]+0.6*egz[i] ;
nd.clear();
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
