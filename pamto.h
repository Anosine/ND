#pragma once

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
void Pushy(string vardas, string pavarde,int e );
double Medirvid(int n1,int n2,int n3,int n4,int n5 );
void printeris(int i);
void irasymas();
void klaida();
void skaiciavim (int i);
void doo();
