#include "ManagerConturi.h"

std::string ManagerConturi::CreateIban()
{
	return std::string();
}

void ManagerConturi::adugareCont()
{
	std::string nume, prenume, iban;
	std::cout << "Introduceti numele personai: \n";
	std::cin >> nume;
	std::cout << "Introduceri prenumele persoanei: \n";
	std::cin >> prenume;
	//TODO: replace whit createIban()
	iban = "TestIban";

	ContBancar* cont = new ContBancar(nume, prenume, iban);
	m_listaConturi.push_back(cont);

	system("cls");

}
