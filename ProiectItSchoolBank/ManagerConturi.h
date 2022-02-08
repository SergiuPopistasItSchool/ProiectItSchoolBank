#pragma once
#include"ContBancar.h"
#include<vector>
#include<iostream>
#include "FileManager.h"

class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	std::string CreateIban();//TODO: BUG: IBAan is not enterly unique beacuse if we stop the program it starts reuising keys
	ContBancar* FindAccout();
	FileManager* m_fileManager;

public:
	void adugareCont();

	int GetNumarConturi();

	void printAllCounturi();

	void EraseAccout();

	void Elibare_Depunere();

	ManagerConturi();
	~ManagerConturi();
};

