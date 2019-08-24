#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <assert.h>
using namespace std;

int main()
//Vardas2 Pavarde2 7   10  8   5   4   6
{
vector <double> gal;
vector <double> gal2;
vector <string> Vardai;
vector <string> Pavardes;
vector <int> Egz;
vector <int> nd;
string pirma, vardas, pavarde;
int n1,n2,n3,n4,n5,e;
double galu, galu1;
//Vardas2 Pavarde2 7   10  8   5   4   6
ifstream inFile("kursiokai.txt");
if(inFile.fail())
{
   cout<<"Klaida atidarant faila\n";
   exit(1);
}
int i=0;
getline(inFile, pirma);
while (inFile >> vardas>>pavarde>>n1>>n2>>n3>>n4>>n5>>e)
   {

    i++;
    Vardai.push_back(vardas);
    Pavardes.push_back(pavarde);
    Egz.push_back(e);
    nd.push_back(n1);
    nd.push_back(n2);
    nd.push_back(n3);
    nd.push_back(n4);
    nd.push_back(n5);
inFile.close();
sort(nd.begin(), nd.end());
double z1,z2,y;
int l;
l=nd.size();
double ndm, ndv;
for(int p=0; p<l;p++)
{
y+=nd[p];
}
if(l%2==0)
{
z2=((nd[(l - 1) / 2]) + nd[l / 2])/2;
ndm=z2;
}
else
{
z1=nd[l/2];
ndm=z1;
}
galu1=0.4*ndm+0.6*Egz[i] ;
ndv=y/l;
galu=0.4*ndv+0.6*Egz[i] ;
gal.push_back(galu);
gal2.push_back(galu1);
cout<<e<<"\n";
nd.clear();}


}
