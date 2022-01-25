#pragma once
#include"ContBancar.h"
#include<vector>
#include<iostream>
class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	std::string CreateIban();
public:
	void adugareCont();

	int GetNumarConturi();

	void printAllCounturi();
};

