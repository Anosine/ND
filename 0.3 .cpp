#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <assert.h>
using namespace std;
vector <string> Vardai;
vector <string> Pavardes;
vector <int> nd;
vector <int> Egz;
vector <double> gal;
vector <double> gal2;
string pirma, vardas, pavarde;
int n1,n2,n3,n4,n5,e;
double galu, galu1, ndm, ndv;
int i=0;
ifstream inFile("kursiokai.txt");
void Pushy(string vardas, string pavarde,int e )
{
    Vardai.push_back(vardas);
    Pavardes.push_back(pavarde);
    Egz.push_back(e);

}
double Medirvid(int n1,int n2,int n3,int n4,int n5 )
{
    double y=0;
    nd.push_back(n1);
    nd.push_back(n2);
    nd.push_back(n3);
    nd.push_back(n4);
    nd.push_back(n5);

sort(nd.begin(), nd.end());

double z1,z2;
int l;
l=nd.size();

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
ndv=y/l;
nd.clear();
return ndm;
return ndv;
}
void printeris(int i)
{
    cout<<"Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
cout<<"-----------------------------------------------------------------\n";
for(int c=0;c<i; c++)
{

cout<<left<<setw(14)<<Vardai[c];
cout<<left<<setw(15)<<Pavardes[c];
cout<<right<<setw(17)<<fixed << setprecision(2) <<gal[c];
cout<<right<<setw(19)<<fixed << setprecision(2) <<gal2[c]<< endl;
}
}
void irasymas()
{
ofstream myfile;
myfile.open ("rezultatai.txt");
myfile <<"Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
myfile <<"-----------------------------------------------------------------\n";
for(int c=0;c<i; c++)
{
myfile<<left<<setw(14)<<Vardai[c];
myfile<<left<<setw(15)<<Pavardes[c];
myfile<<right<<setw(17)<<fixed << setprecision(2) <<gal[c];
myfile<<right<<setw(19)<<fixed << setprecision(2) <<gal2[c]<< endl;

}myfile.close();
}
void klaida()
{
    if(inFile.fail())
{
   cout<<"Klaida atidarant faila\n";
   exit(1);
}
}
void skaiciavim (int i)
{
galu1=0.4*ndm+0.6*Egz[i] ;
galu=0.4*ndv+0.6*Egz[i] ;
gal.push_back(galu);
gal2.push_back(galu1);
}


int main()
{
klaida();
getline(inFile, pirma);
do{
while (inFile >> vardas>>pavarde>>n1>>n2>>n3>>n4>>n5>>e)
   {
Pushy(vardas, pavarde, e);
Medirvid(n1,n2,n3,n4,n5);
skaiciavim(i);
i++;
}
} while(inFile.eof()==0);
inFile.close();
printeris(i);
irasymas();
}
