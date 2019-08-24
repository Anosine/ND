#include <pamto.h>
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
}

int main()
{
klaida();
doo();
printeris(i);
irasymas();
}
