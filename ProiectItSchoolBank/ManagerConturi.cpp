#include "ManagerConturi.h"

void ManagerConturi::adugareCont()
{
	std::string nume, prenume, iban;
	std::cout << "Introduceti numele personai: \n";
	std::cin >> nume;
	std::cout << "Introduceri prenumele persoanei: \n";
	std::cin >> prenume;
	iban = CreateIban();
	ContBancar* cont = new ContBancar(nume, prenume, iban);
	m_listaConturi.push_back(cont);

	system("cls");

}

int ManagerConturi::GetNumarConturi()
{
	int numarConturi = m_listaConturi.size();
	return numarConturi;
}

void ManagerConturi::printAllCounturi()
{
	for (auto& cont : m_listaConturi)
	{
		std::cout << "Nume: " << cont->getNume()<< std::endl;
		std::cout << "Prenume: " << cont->getPrenume() << std::endl;
		std::cout << "IBAN: " << cont->getIban() << std::endl;
		std::cout << "Sold: " << cont->getSold() << std::endl;
	}
	std::cout << "Apaasati tasta 0 pentru a va intoarece\n";
	char back;
	std::cin >> back;

}


std::string ManagerConturi::CreateIban()
{
	int iban = 11111 + (std::rand() % (99999));
	std::string stringIban = std::to_string(iban);
	std::cout << "IBAN generat:  " << stringIban << std::endl;
	std::string stringIbanComplet = "RO44ItSchool" + stringIban;
	return stringIbanComplet;

}
