#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void afficher(const string& q)
{
    if ( q.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else 
    {   
        cout << "Date  : " << q.substr(0,2) << "/" << q.substr(2,2) << "/" << q.substr(4,4) << endl;
        cout << "Heure : " << q.substr(8,2) << "h" << q.substr(10,2) << endl;
    }
}

int main(int argc, char** argv)
{
    string s("011220091223");
    afficher(s);
}