#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
int x,z ;
int l;
cout<< "Iveskite studentu skaiciu "; cin>>x;
vector <double> nd;
string var[x], pav[x];
double ndv[x], ndm[x], gal[x], gal2[x], y=0, egz[x], z1,z2,test, c;
for(int i=0;i<x; i++)
{
y=0 ;
cout<<"Iveskite " << i+1<< "-ojo studendo: varda, pavarde"<< endl;
cout<<"Pvz.: Edmundas Kasauskas"<< endl;
cin>>var[i] >> pav[i];
int atsakymas;
cout<<"Generuoti atsiktinius rezultatus?\n"<<"Pasirinkus skaiciu 0 - atsakymus irasite ranka\n"<<"Pasirinkus 1 - ats. bus sugeneruoti atsitiktinai\n";
cin>>atsakymas;
int iz;
if (atsakymas==1)
{

srand(time(NULL));
cout<<"Sugeneruotas egzamino ir 5 namu darbu rezultatai (Galimi balai nuo 5 iki 10)\n";
for(int ran=0; ran<6; ran++)
{
iz=rand() % 6 + 5;
nd.push_back(iz);
}
}
else if(atsakymas==0)
{
cout<<"Iveskite " << i+1<< "-ojo studendo:egzamino (pirmas skaicius) ir namu darbu rezltatus\n"<<"Pvz.: 5 5 8 2 x"<< "(Ivesdami x sustabdysite ivedima)\n"<< endl;
int l=0;
char ch;
do
{
   while(cin >> c)
nd.push_back(c);
   cin.clear();
   cin >> ch;

} while(ch != 'x');

}


else
    {
        return 0;
    }

egz[i]=nd[0];
nd.erase(nd.begin());
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
