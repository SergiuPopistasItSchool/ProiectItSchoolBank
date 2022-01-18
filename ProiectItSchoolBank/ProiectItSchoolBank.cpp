// ProiectItSchoolBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ContBancar.h"
int main()
{

}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool CheckPassword(string& pass)
{
    if (pass.length() <= 7) //verificare lungime string
    {
        bool haveUpperCase = false;

        for (int i = 0; i < pass.length(); i++)
        {
            if (!(pass[i] >= 97 && pass[i] <= 122)) //verificare litere mici
            {
                haveUpperCase = true;
            }
        }
        return !haveUpperCase;
    }
    else
    {
        return false;
    }
}

string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        return "YOU HAVE UNLOCKED THE DOOR";
    }
    else
    {
        return "You haven't unlocked the door";
    }
}


int main()
{
    cout << endl;
    cout << " Introduceti o parola care sa respecte urmatoarea cerita:" << endl;
    cout << endl;
    cout << " Sa aibe maxim 7 caractere si sa fie doar din litere mici " << endl; //cerinta problema
    cout << endl;
    string S;
    cout << "Introduceti parola: "; // ask input
    cin >> S;
    cout << endl;

    if (CheckPassword(S))
    {
        cout << "Parola respecta cerinta\n" << endl;
        sort(S.begin(), S.end());
        do
        {
            cout << S << " --> ";
            cout << isPalindrome(S) << endl;
            cout << endl;
        } while (next_permutation(S.begin(), S.end()));
    }
    else
        cout << "Parola nu respecta cerinta\n";
}

