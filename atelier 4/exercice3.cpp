#include <iostream>
#include <list>
using namespace std;
  
  void showlist(list <int> a) 
  { list <int> :: iterator it;  //fonction quiva afficher la liste 
  for(it = a.begin(); it != a.end(); ++it) 
      cout << '\t' << *it;
  cout << '\n';
   }
int main(int argc, char** argv) {
	int pos;
	list <int> list1;        //creation de la liste 
cout << "entrer les valeurs de la liste:";
for (int i = 0; i < 10; i++) {       // boucle pour que l utilisateur remplisse la liste de taille 10
     cin>>pos;
list1.push_back(pos); //ajouter les valeur entrerpar cin par pushback au fur et a mesure  
  }
   cout << "la liste avant tri est  : "; 
  showlist(list1);
   cout << "la liste apres tri est  : "; 
   list1.sort();      //trier la liste par la foncion sort 
     showlist(list1); //affichage de liste triee
return 0;
}
