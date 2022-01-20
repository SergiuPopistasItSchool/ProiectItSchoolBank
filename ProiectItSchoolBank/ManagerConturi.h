#pragma once
#include"ContBancar.h"
#include<vector>
#include<iostream>
class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	//TODO: Metoada CreateIban trebuie sa genereze un Iban unic care sa fie folosit pentru a crea conturi
	std::string CreateIban();
public:
	void adugareCont();

};

