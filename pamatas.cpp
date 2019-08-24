#include "Header.h"
vector <string> Vardai;
vector <string> Pavardes;
vector <int> nd;
vector <int> Egz;
vector <double> gal;
vector <double> gal2;
string pirma, antra, vardas, pavarde;
int n1, n2, n3, n4, n5, e;
double galu, galu1, ndm, ndv;
int i = 0;

void generavimas10()
{
	ofstream num10;
	int iz;
	num10.open("10studentu.txt");
	num10 << "Vardas        Pavarde       1ND   2ND   3ND   4ND   5ND   Egzamino balas \n";
	num10 << "-------------------------------------------------------------------------\n";
	for (int des = 0; des < 10; des++)
	{

		num10 << left << setw(6) << "Vardas"<< left << setw(8) << des+1 ;
		num10  << left << setw(7) << "Pavarde" <<  left << setw(8)<< des + 1  ;
		for (int ran = 0; ran<6; ran++)
		{
			iz = rand() % 10+1;
			num10 << left << setw(6) << iz;
		}
		num10 << endl;
		//myfile << right << setw(17) << fixed << setprecision(2) << gal[c];
		//myfile << right << setw(19) << fixed << setprecision(2) << gal2[c] << endl;

	}
	
num10.close();
}
void generavimas100()
{
	ofstream num100;
	int iz;
	num100.open("100studentu.txt");
	num100 << "Vardas        Pavarde       1ND   2ND   3ND   4ND   5ND   Egzamino balas \n";
	num100 << "-------------------------------------------------------------------------\n";
	for (int des = 0; des < 100; des++)
	{

		num100 << left << setw(6) << "Vardas" << left << setw(8) << des + 1;
		num100 << left << setw(7) << "Pavarde" << left << setw(8) << des + 1;
		for (int ran = 0; ran<6; ran++)
		{
			iz = rand() % 10 + 1;
			num100 << left << setw(6) << iz;
		}
		num100 << endl;
		

	}

	num100.close();
}
void generavimas1000()
{
	srand(time(0));
	ofstream num1000;
	int iz;
	num1000.open("1000studentu.txt");
	num1000 << "Vardas        Pavarde       1ND   2ND   3ND   4ND   5ND   Egzamino balas \n";
	num1000 << "-------------------------------------------------------------------------\n";
	for (int des = 0; des < 1000; des++)
	{
		
		num1000 << left << setw(6) << "Vardas" << left << setw(8) << des + 1;
		num1000 << left << setw(7) << "Pavarde" << left << setw(8) << des + 1;
		for (int ran = 0; ran<6; ran++)
		{
			
			
			iz = (rand() % 10 + 1);
			num1000 << left << setw(6) << iz;
		}
		num1000 << endl;


	}

	num1000.close();
}
void generavimas10000()
{
	ofstream num10000;
	int iz;
	num10000.open("10000studentu.txt");
	num10000 << "Vardas        Pavarde       1ND   2ND   3ND   4ND   5ND   Egzamino balas \n";
	num10000 << "-------------------------------------------------------------------------\n";
	for (int des = 0; des < 10000; des++)
	{

		num10000 << left << setw(6) << "Vardas" << left << setw(8) << des + 1;
		num10000 << left << setw(7) << "Pavarde" << left << setw(8) << des + 1;
		for (int ran = 0; ran<6; ran++)
		{
			iz = rand() % 10 + 1;
			num10000 << left << setw(6) << iz;
		}
		num10000 << endl;


	}

	num10000.close();
}
void generavimas100000()
{
	ofstream num100000;
	int iz;
	num100000.open("100000studentu.txt");
	num100000 << "Vardas        Pavarde       1ND   2ND   3ND   4ND   5ND   Egzamino balas \n";
	num100000 << "-------------------------------------------------------------------------\n";
	for (int des = 0; des < 100000; des++)
	{

		num100000 << left << setw(6) << "Vardas" << left << setw(8) << des + 1;
		num100000 << left << setw(7) << "Pavarde" << left << setw(8) << des + 1;
		for (int ran = 0; ran<6; ran++)
		{
			iz = rand() % 10 + 1;
			num100000 << left << setw(6) << iz;
		}
		num100000 << endl;


	}

	num100000.close();
}

void Pushy(string vardas, string pavarde, int e)
{
	Vardai.push_back(vardas);
	Pavardes.push_back(pavarde);
	Egz.push_back(e);

}
double Medirvid(int n1, int n2, int n3, int n4, int n5)
{
	double y = 0;
	nd.push_back(n1);
	nd.push_back(n2);
	nd.push_back(n3);
	nd.push_back(n4);
	nd.push_back(n5);

	sort(nd.begin(), nd.end());

	double z1, z2;
	int l;
	l = nd.size();

	for (int p = 0; p<l; p++)
	{
		y += nd[p];
	}

	if (l % 2 == 0)
	{
		z2 = ((nd[(l - 1) / 2]) + nd[l / 2]) / 2;
		ndm = z2;
	}

	else
	{
		z1 = nd[l / 2];
		ndm = z1;

	}
	ndv = y / l;
	nd.clear();
	return ndm;
	return ndv;
}
void printeris()
{
	cout << "Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
	cout << "-----------------------------------------------------------------\n";
	for (int c = 0; c<i; c++)
	{

		cout << left << setw(14) << Vardai[c];
		cout << left << setw(15) << Pavardes[c];
		cout << right << setw(17) << fixed << setprecision(2) << gal[c];
		cout << right << setw(19) << fixed << setprecision(2) << gal2[c] << endl;
	}
}
void irasymas()
{
	//ofstream myfile;
	ofstream vargs;
	ofstream kiet;
	//myfile.open("rezultatai.txt");
	vargs.open("vargsiukai.txt");
	kiet.open("kietiakai.txt");
	//myfile << "Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
	//myfile << "-----------------------------------------------------------------\n";
	vargs << "Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
	vargs << "-----------------------------------------------------------------\n";
	kiet << "Vardas        Pavarde         Galutinis (Vid.) / Galutinis (Med.)\n";
	kiet << "-----------------------------------------------------------------\n";
	for (int c = 0; c<i; c++)
	{
		if (gal[c]>=5)
		{
			kiet << left << setw(14) << Vardai[c];
			kiet << left << setw(15) << Pavardes[c];
			kiet << right << setw(17) << fixed << setprecision(2) << gal[c];
			kiet << right << setw(19) << fixed << setprecision(2) << gal2[c] << endl;
		}

		else if (gal[c] < 5)
		{
			vargs << left << setw(14) << Vardai[c];
			vargs << left << setw(15) << Pavardes[c];
			vargs << right << setw(17) << fixed << setprecision(2) << gal[c];
			vargs << right << setw(19) << fixed << setprecision(2) << gal2[c] << endl;
		}


		/*myfile << left << setw(14) << Vardai[c];
		myfile << left << setw(15) << Pavardes[c];
		myfile << right << setw(17) << fixed << setprecision(2) << gal[c];
		myfile << right << setw(19) << fixed << setprecision(2) << gal2[c] << endl;
		*/
	}//myfile.close();
	vargs.close();
	kiet.close();
}
ifstream inFile("1000studentu.txt");
void klaida()
{
	
	if (inFile.fail())
	{
		cout << "Klaida atidarant faila\n";
		exit(1);
	}
}
void skaiciavim(int i)
{
	galu1 = 0.4*ndm + 0.6*Egz[i];
	galu = 0.4*ndv + 0.6*Egz[i];
	gal.push_back(galu);
	gal2.push_back(galu1);
}
void doo()
{
	
	getline(inFile, pirma);
	getline(inFile, antra);
	do {
		while (inFile >> vardas >> pavarde >> n1 >> n2 >> n3 >> n4 >> n5 >> e)
		{
			Pushy(vardas, pavarde, e);
			Medirvid(n1, n2, n3, n4, n5);
			skaiciavim(i);
			i++;
		}
	} while (inFile.eof() == 0);
	inFile.close();
}
