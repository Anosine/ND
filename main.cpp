
#include "Header.h"

int main()
{
	int lauk;
	auto start = std::chrono::high_resolution_clock::now();
	cout << "Programa skaiciuoja, prasome palaukti :)\n";
	//generavimas10();
	//generavimas100();
	generavimas1000();
	//generavimas10000();
    //generavimas100000();
	klaida();
	doo();
	//printeris();
	irasymas();
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<float> duration = end - start;
	cout <<"Programa uztruko "<< duration.count()<< "s\n";
	cout << "Rezultatus rasite vargsiukai.txt ir kietiakai.txt failuose\n";
	cout << "Sis langas uzsidaro ivedus bet koki simboli ";
	cin >> lauk;
}
