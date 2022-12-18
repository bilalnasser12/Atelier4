#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std ;
int main(){
	list<string>mylist;                   //creation liste
mylist.push_back("Nasser,Bilal,22ans"); // remplissage de nom prenom et age par pushback
mylist.push_back("Mohamed,Bakali,21ans");
mylist.sort(); //triage de liste
list<string>::iterator it=mylist.begin()  ; //
for(;it!=mylist.end();it++){ //affichage de la liste element par element triee
	cout<<*it<<endl;
}
return 0 ;
}
