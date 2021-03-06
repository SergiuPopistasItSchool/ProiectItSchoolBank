// ProiectItSchoolBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ManagerConturi.h"

/*
Banca Proiect.
ITSchoolBank

1. O clasa cont bancar ce trebuie sa aibe atribute precum nume,prenume, sold, tip de cont (valuta sau lei) IBAN
Un cont trebuie neaparat sa aibe un nume,prenume si un IBAN care trebuie sa fie unic

2.in maine se afla terminalul principal al bancii in care trebuie sa avem urmatoarele optiunii
   2.1 numar de conturi --> ce ne da numarul de conturi inregistrate in banca
   2.2 creare cont --> cu aceasta optiune se poate crea un cont nou
		2.2.1 --> ar trebui un scrren diferit si un set de optiuni in care
		operatorul bancii sa introduca datele pentru crearea contului.(trebuie ca aceasta procedura sa verifice daca exista deja contul ce
		se doreste creat iar daca da sa anunte opreatorul)
		2.2.2 --> o optiune de return la main screen ( ecranul cu optiunie principale )
   2.3 O optiune de modificare cont-> in care operatorul poate sa modifice date despre cont(ex schimbare nume, schimbare sume etc)
   2.4 O optiune prin care un cont se poate sterge din sistemul bancii
   2.5 O optiune prin care un cont poate sa extraga sume - > vrei sa adaugi sau sa extragi o suma de bani
   2.6 O optiune prin care un cont sa vada care este suma din cont
		Trebuie cautat contul intordus iar daca exista se poate vizualiza
		Daca nu exista putem incepe o procedura de creare cont

3. Un sistem in care putem sa salvam datele acestea intr-un fisier local (CSV file)


*/
//ToDo: La optiunea Modificare Cont, schimbarea in cazua trebuie sa fie reflectata si in .csv
//ToDo: La optiunea stergere cont dupa ce este sters din m_lista_conturi trebuie sters si din .csv
//ToDo: Un sistem de user si parola ca sa asiguram ca opertorul poate sa lucreze pe statia respectiva
//ToDo: La optiunea eliberare/depunere modifcarile sa fie reflectate si in .csv

int main()
{
	ManagerConturi manager;
	int optiune;
	do
	{
		std::cout << "Alege una din urmatoarele optiuni: \n";
		std::cout << "1 -> Numar conturi\n";
		std::cout << "2 -> Creare Cont\n";
		std::cout << "3 -> Modificare cont\n";
		std::cout << "4 -> Stergere Cont\n";
		std::cout << "5 -> Eliberare/Depunere\n";
		std::cout << "6 -> Detalii Cont\n";
		std::cout << "0 -> EXIT\n";

		std::cout << "Introduceti operatia pe care o doriti: \n";
		std::cin >> optiune;

		switch (optiune)
		{
		case 1:
			std::cout << "Ati ales optiunea 1\n";
			std::cout << "Numarul total de conturi este: "
				<< manager.GetNumarConturi() << std::endl;
			break;
		case 2:
			std::cout << "Ati ales optiunea 2\n";
			system("cls");
			manager.adugareCont();
			break;
		case 3:
			std::cout << "Ati ales optiunea 3\n";
			break;
		case 4:
			std::cout << "Ati ales optiunea 4\n";
			manager.EraseAccout();
			break;
		case 5:
			std::cout << "Ati ales optiunea 5\n";
			manager.Elibare_Depunere();
			break;
		case 6:
			std::cout << "Ati ales optiunea 6\n";
			system("cls");
			// Vreti sa cautati un anumit cont? -> apasti tasa 1
			//					O metodata prin care cereti detalii despre contul pe care vrem sa il gasiim
			//						si desigur sa il cautam iar dupa aceea sa il printam
			//Vrei sa le accesati pe toate? -> apasai tasta 2 

			manager.printAllCounturi();
			break;
		case 0:
			std::cout << "Multumim, La reverede\n";
			break;
		default:
			std::cout << "Optiune invalida\n";
			break;
		}
	} while (optiune != 0);
	

}
